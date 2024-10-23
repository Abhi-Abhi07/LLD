#include<iostream>
using namespace std;

class Shape{
    public:
    virtual void draw(){
        cout<<"Drawing Generic..."<<endl;
    }
};

class Circle :public Shape{
    public:
    void draw(){
        cout<<"Drawing Circle...\n";
    }
};

class Rectangle :public Shape{
    public:
    void draw(){
        cout<<"Drawing Rectangle...\n";
    }
};

void shapeDrawing(Shape *s){
    s->draw();
}
int main(){
    cout<<endl;

    // Shape *s=new Shape();
    // // s->draw();
    // Circle *c=new Circle();
    // // c->draw();
    // Rectangle r;
    // // r.draw();

    // with and without virtual you can try
    // shapeDrawing(s);
    // shapeDrawing(c);
    // shapeDrawing(&r);


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