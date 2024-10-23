#include<iostream>
using namespace std;

class complex{

    int real;
    int img;

    public:
    complex(){this->real=this->img=-1;}

    complex (int r, int i):real(r),img(i){}

    complex operator+(const complex &b){
        complex res;
        res.real=this->real+b.real;
        res.img=this->img+b.img;
        return res;
    }

    // comparing two complex num are equal or not
    bool operator==(const complex &b){
        return ((this->real==b.real)&&(this->img==b.img));
    }

    void print(){
        printf(" %d + i%d\n",this->real,this->img);
    }
    ~complex(){
        cout<<"Destructor are called !"<<endl;
    }
};
int main(){
    // int a=4;
    // int b=9;
    // int c=a+b;
    // cout<<c<<endl;

    complex *a=new complex(2,5);
    complex *b=new complex(2,5);
    a->print();
    b->print();
    complex *d=new complex(2,5);
    complex c = *a + *b + *d;
    c.print();

    if(*a==*b){
        cout<<"Comlex num are equal 1\n";
    }else{
        cout<<"Not equal !"<<endl;
    }

    delete a,b,c;
return 0;
}