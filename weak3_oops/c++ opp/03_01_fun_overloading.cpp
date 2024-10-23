#include<iostream>
using namespace std;

class A{
    public:
    A(){}

    int sum(int a,int b){
        return a+b;
    }
    int sum(int a,int b, int c){
        return a+b+c;
    }
    double sum(double a, double b){
        return a+b;
    }
    ~A(){}
};
int main(){
    A *a=new A();

    cout<<a->sum(4,7)<<endl;
    cout<<a->sum(4.3,2.6)<<endl;
    cout<<a->sum(3,6,8)<<endl;

    delete a;
return 0;
}