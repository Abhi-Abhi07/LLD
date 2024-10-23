#include<iostream>
using namespace std;
class abc{
    public:
    int x,y;
    static int a,b;
    void print(){
        // this pointer accessable
        cout<<x<<" "<<y<<endl;
    }
    static void printstatic(){
        // NO this pointer accessable
        cout<<a<<" "<<b<<endl;
    }
};
int abc::a=80;
int abc::b=90;
int main(){
    abc obj1;
    obj1.x=1;
    obj1.y=3;
    obj1.print();
    obj1.printstatic();
    abc::printstatic();
    abc obj2;
    obj2.x=10;
    obj2.y=20;
    cout<<endl;

    obj1.print();
    obj1.a=100;
    abc::b=200;
    obj1.printstatic();
    abc::printstatic();
    cout<<endl;

    obj2.print();
    obj2.printstatic();
    abc::printstatic();
return 0;
}