#include<iostream>
using namespace std;

class Shape final{
    public:
    virtual void draw ()final{
        cout<<"Drawing Generic..."<<endl;
    }
};

class Circle :public Shape{
    public:
    void draw(){
        cout<<"Drawing Circle...\n";
    }
};

int main(){
    cout<<endl;

    // you can't inherit final class
    // you can't overload final method or funtion

    // with and without virtual you can try
    // shape class obj cration
    Shape *s=new Shape();
    s->draw();
    // UPCASTING
    Shape *s2=new Circle();
    s2->draw();
    // circle class obj creation
    Circle *c=new Circle();
    c->draw();
    // DOWNCASTING
    Circle *c2=(Circle *)(new Shape());
    c2->draw();

    cout<<endl;
return 0;
}