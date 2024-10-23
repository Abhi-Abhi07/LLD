#include <iostream>
using namespace std;

class Employee {
    protected:
    string name;
    string employee;

    public :
    Employee(){}

    void display(){
        cout<<"Emplyee name : "<<name<<endl;
        cout<<"Employee " <<employee<<endl;
    }

};
