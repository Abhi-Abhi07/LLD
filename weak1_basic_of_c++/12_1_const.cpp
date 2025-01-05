#include<iostream>
using namespace std;

class myclass{
    int x;
    int *y;
    mutable int z;
    const int p;

    public:
    //const varable are initailize only initailization list
    myclass():p(){
        x=2,*y=5,z=10;
    }

    myclass(int _x,int _y, int _z=0,int _p=0):p(_p){
        x=_x;
        y=new int(_y);
        z=_z;
    }

    int getX() const{
        return x;
    }
    void setX(int val){
        x=val;
    }

    int getY() const{
        return *y;
    }
    void setY(int val){
        *y=val;
    }

    void setZ()const{
        z=100;
    }
    int getZ() const{
        z=8;
        return z;
    }

};
void printMyClass(const myclass &a){
    cout<<a.getX()<<endl;
    // a.setX(50);//can't be call because setX() are non const 
    cout<<a.getY()<<endl;
    cout<<a.getZ()<<endl;//can be call because z are mutable 
}

int main(){

    // myclass a();
    // cout<<a.getX()<<endl;
    // cout<<a.getY()<<endl;

    // myclass a(3,7);
    // printMyClass(a);

    cout<<"end"<<endl;




    // const int x=5;
    // // x=10;
    // cout<<x<<endl;

    // how to chnge constant value

    // 1. ye pahle wale compiler me work karta tha
    // int *ptr=&x;
    // *ptr=10;
    // cout<<x<<endl;

    // 2. const with pointer
    // 1. CONST data, NON CONST pointer
    // // const int *a=new int(5); 
    // int const *a=new int(5);//same as just upper line
    // cout<<*a<<endl;
    // int b=10;
    // // *a=b;// data can't be change
    // a=&b; // pointer can be change
    // cout<<*a<<endl;

    // // 2. CONST pointer, NON CONST data
    // int *const a=new int(5);
    // cout<<*a<<endl;
    // int b=5;
    // *a=10; //can be change
    // // a=&b;// can't be change
    // cout<<*a<<endl;

    // // 3. CONST pointer, CONST data
    // const int *const a=new int(5);
    // cout<<*a<<endl;
    // int b=5; 
    // // *a=10; //can't be change
    // // a=&b;// can't be change
    // cout<<*a<<endl;

return 0;
}