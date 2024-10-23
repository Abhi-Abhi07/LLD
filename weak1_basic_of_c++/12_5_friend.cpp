#include<iostream>
using namespace std;

class A{
    int x;

    public:
    A(int _x):x(_x){}

    private:
    int getX()const { return x; }
    void setX(int _x) { x=_x; }

    friend class B;
    friend void print(const A&);
};

class B{
    public:
    int y;

    B(){}

    void print(const A &a){
        cout<<a.getX()<<endl;
        cout<<a.x<<endl;
    }
};

void print(const A &a){
    cout<<a.x<<endl;
}
int main(){
    A a(5);
    B b;
    b.print(a);
    print(a);
return 0;
}