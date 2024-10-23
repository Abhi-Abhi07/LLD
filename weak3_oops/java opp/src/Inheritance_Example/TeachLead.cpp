#include<iostream>
using namespace std;
#include"Employee.cpp"
#include"ProjectManager.cpp"
#include"TeamLead.cpp"
class TeachLead: public Employee, public ProjectManager, public TeamLead{
    public:
    TeachLead(){}

    void displayInfo(){
        cout<<"information are displayed"<<endl;
    }
};
