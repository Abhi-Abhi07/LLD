#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    string name;
    int *nos;
    int *x;
    private:
    string gfName;
    int age;

    public:
    Student(){
        cout<<"Default ctor called !"<<endl;
    }

    Student(int id,string name,int nos, int age, string gfName){
        cout<<"parameterzed ctor called !"<<endl;
        this->id=id;
        this->name=name;
        this->age=age;
        this->gfName=gfName;
        this->nos=new int(nos);

        this->x=new int(1000);
    }

    void setGfName(string gfName){
        this->gfName=gfName;
    }

    string getGfName()const{
        return this->gfName;
    }
    void study(){
        cout<<this->name <<" studying !"<<endl;
    }
    void play(){
        cout<<this->name<<" playing !\n";
    }

    private:
    void chatting(){
        cout<<this->name<<" chatting with your gf "<<this->gfName<<endl;
    }

    public:
    void sleep(){
        cout<<this->name<<" Sleeping !\n";
    }

    ~Student(){
        cout<<"dtor called ! "<<endl;
        delete this->nos;
        delete this->x;
    }
};
int main(){
    Student *s=new Student(1,"Jethalal",5,12,"Babita");

    cout<<s->getGfName()<<endl;
    s->setGfName("Ravi");
    cout<<s->getGfName()<<endl;

    delete s;
return 0;
}