#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Base ctor call !"<<endl;
    }
    virtual ~Base(){
        cout<<"Base dtor call !"<<endl;
    }
};
class derived: public Base{
    int *a;
    public:
    derived(){
        a=new int[1000];
        cout<<"derived ctor call !"<<endl;
    }
    ~derived(){
        delete []a;
        cout<<"derived dtor call !\n";
    }
};
int main(){
    Base *b=new derived();
    delete b;
return 0;
}