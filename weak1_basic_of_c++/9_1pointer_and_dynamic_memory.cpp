#include<iostream>
using namespace std;

int main(){
    // new int;
    // int *ptr=new int(11);
    // *ptr=5;
    // cout<<&ptr<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // delete ptr;
    // cout<<*ptr<<endl;


    // new int[5];
    // int *ptr=new int[5];
    // ptr[0]=10;
    // ptr[1]=30;
    // *(ptr+2)=20;
    // *(ptr+3)=40;
    // ptr[4]=50;
    // for(int i=0;i<5; i++){
    //     cout<<ptr[i]<<endl;
    // }
    // delete []ptr;


    // void *ptr=NULL;
    // int a=5;
    // ptr=&a;
    // cout<<&a<<endl;
    // cout<<*((int*)ptr)<<endl;


    // Multiple pointer 
    int a=5;
    int *ptr=&a;
    int **qtr=&ptr;
    int ***rtr=&qtr;
    cout<< a <<endl;
    cout<< &a <<endl;
    // cout<< *a <<endl;
    cout<< ptr <<endl;
    cout<< &ptr <<endl;
    cout<< *ptr <<endl;
    cout<< qtr <<endl;
    cout<< &qtr <<endl;
    cout<< *qtr <<endl;
    cout<< **qtr <<endl;
    cout<< rtr <<endl;
    cout<< &rtr <<endl;
    cout<< *rtr <<endl;
    cout<< **rtr <<endl;
    cout<< ***rtr <<endl;

return 0;
}