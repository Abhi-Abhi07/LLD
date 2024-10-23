#include<iostream>
using namespace std;

class bird{
    public:
    bird(){}
    virtual void fly(){
        cout<<"Bird fly\n";
    }
    void sleep(){
        cout<<"sleeping\n";
    }
};

class sparrow : public bird{
    public:
    sparrow(){}
    void fly(){
        cout<<"sparrow fly\n";
    }
};

class normalClass{
    public:
    void print(){}
};
class virtualClass{
    public:
    virtual void print(){}
};
int main(){
    bird *b=new sparrow();
    b->fly();  
    b->sleep();

    // cout<<"sizeof noraml class : "<<sizeof(normalClass)<<endl;//size=1
    // cout<<"sizeof vertual class : "<<sizeof(virtualClass)<<endl;//size=4 because member pointer vptr add ho rha hai

    // sparrow *s=new sparrow();
    // s->fly();
    // s->sleep();
return 0;
}