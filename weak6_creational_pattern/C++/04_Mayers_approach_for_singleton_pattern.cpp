#include<iostream>

class Singleton{
    public:
    static Singleton& getInstance(){
        static Singleton instance; //gureented to be destroyed and instantiated on compiletion of utility 
        return instance;
    }

    private:
    Singleton(){
        std::cout<<"Obj created !\n";
    }

    Singleton(Singleton const&)=delete;
    Singleton& operator=(Singleton const&)=delete;
};

int main(){
    Singleton& instance1=Singleton::getInstance();
    std::cout<<&instance1<<std::endl;
    Singleton& instance2=Singleton::getInstance();
    std::cout<<&instance2<<std::endl;

    // Double check locking related article
    // https://preshing.com/20130930/double-checked-locking-is-fixed-in-cpp11/


return 0;
}