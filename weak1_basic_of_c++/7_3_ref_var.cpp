#include<iostream>
using namespace std;

int main(){
    int a=15;
    int &b=a;
    cout<<a<<" -- "<<b<<endl;
    b=56;
    cout<<a<<" -- "<<b<<endl;
    a=45;
    cout<<a<<" -- "<<b<<endl;
return 0;
}