#include<iostream>
#include<bits\stdc++.h>
#include<vector>

class IEngine{

};

class ScorpioEngine: public IEngine{

};

class DefenderEngine: public IEngine{

};

class IVehicleFactory{
    public:
    virtual IEngine* createEngine()=0; 
};

class ScorpioFactory :public IVehicleFactory{
    public:
    IEngine* createEngine() override {
        std::cout << "Scorpio ka engine bna rha hu!\n";
        return new ScorpioEngine();
    }
};

class DefenderFactory :public IVehicleFactory{
    public:
    IEngine* createEngine() override {
        std::cout<<"Defender ka engine bna rha hu !\n";
        return new DefenderEngine();
    }
};

class Car {
    public:
    IEngine* engine;
    IVehicleFactory* carFactory;

    Car(IVehicleFactory* carFactory){
        this->carFactory=carFactory;
    }

    void driveCar(){
        engine=carFactory->createEngine();
        std::cout<<"Mill gyi gadi chilllll maro !\n";
    }
};

int main(){
    IVehicleFactory *factory1=new ScorpioFactory();
    IVehicleFactory *factory2=new DefenderFactory();
    Car *car1=new Car(factory1);
    Car *car2=new Car(factory2);

    std::vector<Car>v;
    v.push_back(*car1);
    v.push_back(*car2);

    for(Car c: v){
        c.driveCar();
    }


return 0;
}