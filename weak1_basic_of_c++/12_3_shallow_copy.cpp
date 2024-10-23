#include<iostream>
using namespace std;
class abc{
    public:
    int x;
    int *y;

    abc(){}

    // default dump copy constructor, it does shallow copy
    // abc(const abc &obj){
    //     x=obj.x;
    //     y=obj.y;
    // }

    // our smart deep copy
    abc(const abc &obj){
        x=obj.x;

        // int *ptr=obj.y;
        // int value=(*ptr);
        // y=&value;
        y=new int(*obj.y);
    }

    abc(int _x,int _y):x(_x),y(new int(_y)){}

    void print(){
        printf("X : %d\nPTR Y : %p\nContent of Y(*y) : %d\n\n",x,y,*y);
        // cout<<y<<endl<<endl;
    }

    ~abc(){
        delete y;
    }
};
int main(){

    // destructor case
    abc *a=new abc(3,4);
    abc b(*a);
    delete a;//shallow copy me y ptr delete
    b.print();//b y ko bhi access karga


    // abc a(2,5);
    // // a.print();
    // // a.x=2;
    // // a.y=new int(5);
    // cout<<"printing A"<<endl;
    // a.print();

    // abc b(a);//by default call hota hai, copy ctor jo ki shallow copy karta hai
    // // abc b=a; //by default call hota hai, copy ctor jo ki shallow copy karta hai
    // // above 2 line are same

    // cout<<"printing B"<<endl;
    // b.print();
    // b.x=10;
    // *b.y=20;
    // cout<<"printing B"<<endl;
    // b.print();
    // cout<<"printing A"<<endl;
    // a.print();
return 0;
}