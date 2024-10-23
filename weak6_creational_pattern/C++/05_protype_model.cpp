#include<iostream>
class ScorpioEngine{
    public:
        virtual ~ScorpioEngine() {}
};

class ScorpioNEngine : public ScorpioEngine{

};

class ScorpioClassicEngine : public ScorpioEngine{
    
};

class FortunerEngine{
    public:
    virtual ~FortunerEngine(){}
};

class FortunerNeoEngine: public FortunerEngine{

};

class FortunerXEngine: public FortunerEngine{

};
class ICarPrototype{
    public:
    virtual ICarPrototype* clone()=0;
    virtual ~ICarPrototype(){}
};

class IScorpioPrototype :public ICarPrototype{
    public:
    virtual void setEngine(ScorpioEngine* scorpioeEngine)=0;
};

class IFortunerPrototype: public ICarPrototype{
    public:
    virtual void setEngine(FortunerEngine* fortunerEngine)=0;
};

class Scorpio : public IScorpioPrototype{
    public:
    ScorpioEngine *engine;

    Scorpio() : engine(new ScorpioEngine()){}
    // copy ctor
    Scorpio(const Scorpio& other) {
        engine=new ScorpioEngine(*other.engine);
    }

    ~Scorpio() {
        delete engine;
    }
 
    ICarPrototype* clone() override {
        // *this current obj -> pass in copy ctor for colning
        return new Scorpio(*this);
    }

    void setEngine(ScorpioEngine* engine) override {
        if (this->engine) {
            delete this->engine;
        }
        this->engine = engine;
    }
};

    class Fortuner : public IFortunerPrototype{
    public:
    FortunerEngine *engine;

    Fortuner (): engine(new FortunerEngine()){}

    // copy ctor
    Fortuner (const Fortuner &obj){
        engine=new FortunerEngine(*obj.engine);
    }

    ~Fortuner(){
        delete engine;
    }


    ICarPrototype* clone(){
        // *this current obj -> pass in copy ctor for colning 
        return new Fortuner(*this);
        // without *this call defult copy ctor
        // return new Fortuner();
    }

    void setEngine(FortunerEngine* engine){
        if (this->engine) {
            delete this->engine;
        }
        this->engine = engine;
    }
};

int main(){
    IScorpioPrototype* prototype = new Scorpio();
    IScorpioPrototype* scorpioN =  static_cast<IScorpioPrototype*>(prototype->clone());
    scorpioN->setEngine(new ScorpioNEngine());

    delete prototype;
    delete scorpioN;


    IFortunerPrototype *p=new Fortuner();
    IFortunerPrototype* fortunerX = static_cast<IFortunerPrototype*>(p->clone());
    fortunerX->setEngine(new FortunerXEngine());
    delete p;
    delete fortunerX;
return 0;
}