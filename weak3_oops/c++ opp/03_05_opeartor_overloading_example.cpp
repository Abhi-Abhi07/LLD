#include<iostream>
// header file
using namespace std;
// namespace declaration


// defining a class 
class Complex{
  // private variables
    private:
    int real;
    int img;

  // public variables
    public:
    Complex (){}

    // parameterized constructor
    Complex(int _real, int _img):real(_real),img(_img){}

    // this method is overloading the + operator
    // this method returns a object of class Complex that's why the return type is 'Complex' 
    // and operator+ is the syntax for overlaoding the operator 
    // eg : operator++, operator--, operator* etc
    // 'const Complet &obj' is the parameter object we are passing from main function
    // this function is creating a new object of class Complex 
    // and initializing its values by adding current object and obj object taken from parameter
    Complex operator+(const Complex &obj) {

        // simplified syntax : 
        // Complex tempObj(real + obj.real, img + obj.img);
        // return tempObj;
        cout<<"Hello"<<endl;
        this->print();
        obj.print();
        return Complex(real + obj.real, img + obj.img);
    }

    // same as above this method overlaods '+=' operator 
    // a = a + b  can be written as a += b; 
    Complex& operator+=(const Complex &obj){
        cout<<"Hello"<<endl;
        // means it adds current object's real with obj.real 
        real+=obj.real;

        // and  adds current object's img with obj.img 
        img+=obj.img;

        // returns this (current object)
        return *this;
    }

    // method to print the object
    void print()const{
        printf(" %d + i%d\n",this->real,this->img);
    }
};
int main(){

    // creating new object using parameterised contructor
    Complex c1(3,6);
    // creating new object using parameterised contructor
    Complex c2(-3,1);
    // creating new object using parameterised contructor
    Complex c3(4,-5);
    // creating new object using parameterised contructor
    Complex c4(2,3);

    Complex cArray[]={c1,c2,c3,c4};
    // this line calls the + operator method 
    Complex c5=c1+c2+c3+c4;

    // Complex c5(0,0);
    // for(int i=0; i<4; i++){
    //     c5+=cArray[i];
    // }

    // Complex c5(0,0);
    // c5+=c1+c2;

    // printing the result
    cout<<"result :- "<<endl;
    c5.print();

    return 0;
}