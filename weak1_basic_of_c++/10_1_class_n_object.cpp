#include<iostream>
using namespace std;

class Student{
    public:
    // properties
    string name;
    int age;
    float weight;
    float height;

    // behaiour
    void Studying(){
        cout<<name<<" is studying\n";
    }
    void Runing(){
        cout<<"I am Running\n";
    }
};

int main(){
    // cout<<sizeof(Student)<<endl;

    // Object Creation

    // Static way
    // Student st;
    // st.age=20;
    // st.name="Abhi";
    // st.weight=55;
    // st.Runing();
    // st.Studying();

    // Dynamic way
    // Student *s1=new Student; //show inconsistancy sometime without () 
    Student *s1=new Student(); // so always use ()
    (*s1).age=21;
    (*s1).height=171;
    (*s1).name="Ritik";
    s1->weight=65;
    (*s1).Runing();
    s1->Runing();
    s1->Studying();
return 0;
}