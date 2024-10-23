#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>

class bird{
    public:
    virtual void fly()=0;
    virtual void eat()=0;
    // classes that inherit this class
    // has to implement pure virtual fun
};

class sparrow: public bird{
    private:
    void fly(){
        std::cout<<"Sparrow is flying..."<<std::endl;
    }
    void eat(){
        std::cout<<"Sparrow is eating...\n";
    }
};

class eagle: public bird{
    private:
    void fly(){
        std::cout<<"eagle is flying very fast..."<<std::endl;
    }
    void eat(){
        std::cout<<"eagle is eating fast...\n";
    }
};

class piggon: public bird{
    private:
    void fly(){
        std::cout<<"piggon is flying faster..."<<std::endl;
    }
    void eat(){
        std::cout<<"piggon is eating...\n";
    }
};

#endif