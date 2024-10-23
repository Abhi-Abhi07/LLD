#include<iostream>

class ICar{
    public:
    virtual~ ICar(){}
};

class Scorpio: public ICar{
    public:
    ~Scorpio(){
        std::cout<<"Scorpio Being destroyed !\n";
    }
};

class Fortuner: public ICar{
    public:
    ~Fortuner(){
        std::cout<<"Fortuner Being destroyed !\n";
    }
};

class ICarBuilder{
    public:
    virtual void buildEngine()=0;
    virtual void buildChassis()=0;
    virtual void buildTyre()=0;
    virtual void buildBodyShell()=0;

    virtual ICar* build()=0;
    virtual ~ ICarBuilder(){}
};

class ScorpioBuilder : public ICarBuilder{
    public:

    Scorpio *s1=new Scorpio();

    void buildEngine(){

        // s1 Engine=new ScorpioEngine();
        std::cout<<"Scorpio Engine getting inserted !\n";
    }

    void buildChassis(){
        // s1 Engine=new ScorpioChassis();
        std::cout<<"Scorpio Chassis getting inserted !\n";
    }

    void buildTyre(){
        // s1 Tyre=new ScorpioTyre();
        std::cout<<"Scorpio Tyre getting inserted !\n";
    }

    void buildBodyShell(){
        // s1 Engine=new ScorpioChassis();
        std::cout<<"Scorpio BodyShell getting inserted !\n";
    }

    ICar* build(){
        std::cout<<"Scorpio ready hai, le jao !\n";
        return s1;
    }
};

class FortunerBuilder : public ICarBuilder{
    public:

    Fortuner *s1=new Fortuner();

    void buildEngine(){
        std::cout<<"Fortuner Engine getting inserted !\n";
    }

    void buildChassis(){
        std::cout<<"Fortuner Chassis getting inserted !\n";
    }

    void buildTyre(){
        std::cout<<"Fortuner Tyre getting inserted !\n";
    }

    void buildBodyShell(){
        std::cout<<"Fortuner BodyShell getting inserted !\n";
    }

    ICar* build(){
        std::cout<<"Fortuner ready hai, le jao !\n";
        return s1;
    }
};

class Director{
    public:
    ICarBuilder* builder;

    Director(ICarBuilder* builder){
        this->builder=builder;
    }

    void construct(){
        builder->buildBodyShell();
        builder->buildEngine();
        builder->buildChassis();
        builder->buildTyre();
    }

    ~Director(){
        std::cout<<"builder being destroyed !"<<std::endl;
        delete builder;
    }
};

int main(){

    std::cout<<"process Start !\n";
    ICarBuilder* builder=new ScorpioBuilder();
    Director* director=new Director(builder);

    // guidence dedo
    director->construct();

    ICar* car= builder->build();

    delete director;
    delete car;
    std::cout<<"Process End Success !\n";

return 0;
}