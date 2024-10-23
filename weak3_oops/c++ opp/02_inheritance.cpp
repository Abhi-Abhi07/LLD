#include<iostream>
using namespace std;

class vehicle{

    public:
    string name;
    string model;
    int noOfTyers;

    protected:
    int oil;

    private:
    int howOldvehicle;

    public:
    vehicle(){}

    vehicle(int _noOfTyers, string _name,string model):name(_name),model(model){
        this->noOfTyers=_noOfTyers;
        cout<<"vehicle ctor called !"<<endl;
        // cout<<this->name<<endl;
        // cout<<this->model<<endl;
    }
    void startEngine(){
        cout<<"Engine starting !"<<endl;
    }

    void stopEntgine(){
        cout<<"Engine Stoped !"<<endl;
    }
};

class moterCycle : public vehicle{
    public:
    int maxSpeed;
    moterCycle(int _noOfTyers, string _name,string _model,int _maxSpeed):vehicle(_noOfTyers,_name,_model){
        cout<<"mpterCycle ctor called !"<<endl;
        this->maxSpeed=_maxSpeed;
    }
};

int main(){
    // vehicle *v=new vehicle(4,"honda","55CC3A");
    moterCycle m(4,"Suzuki 800","RXI",140);
return 0;
}