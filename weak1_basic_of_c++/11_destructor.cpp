#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    Student(){
        cout<<"Inside Constructor"<<endl;
    }
    Student(int myage,string myName){
        age=myage;
        name=myName;
        cout<<"Inside peramiteised constructor\n";
    }
    ~Student(){
        cout<<"I am inside in Destructor\n";
    }
};
int main(){
    Student *s2=new Student(3,"Rajveer");
    cout<<s2->age<<endl;
    delete s2;
    // Accessing s2->age again after deleting the object leads to undefined behavior.
    // It might output garbage values, crash, or exhibit unpredictable behavior.
    // cout<<s2->age<<endl;
    cout<<"\n**Now Create object in Static**\n"<<endl;
    Student s1;
return 0;
}