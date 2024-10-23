#include<iostream>
using namespace std;

class Student{
    public:
    // properties
    string name;
    int age;
    float weight;
    float height;

    // Construnctor
    Student(){
        cout<<"Inside No peramiteised constructor\n";
        this->age=2;
        name="Ravi";
        height=45;
        weight=10;
    }
    
    // Peramiterised constructor
    // Student(int myage,int myWeight,int myHeight,string myName){
    //     cout<<"Inside peramiteised constructor\n";
    //     age=myage;
    //     name=myName;
    //     height=myHeight;
    //     weight=myWeight;
    // }

    // initializer List  
    Student(int myage,int myWeight,int myHeight,string myName):age(myage), 
            weight(myWeight), height(myHeight), name(myName){
        cout<<"Inside peramiteised constructor\n";
    }
    // behaiour
    void Studying(){
        cout<<name<<" is studying\n";
    }
    void Runing(){
        cout<<"I am Running\n";
    }

    ~Student(){
        cout<<"I am inside in Destructor\n";
    }
};

int main(){
    // Student s1;
    // Student *s2=new Student;
    // Student *s3=new Student();

    // Student s1(3,4,50,"Anushka");

    // Student *s2=new Student(3,4,50,"\"Rajveer\"");
    // cout<<s2->age<<endl;
    // cout<<s2->height<<endl;
    // cout<<s2->age<<endl;
    // cout<<s2->name<<endl;

    Student *s=new Student();
    delete s;

return 0;
}