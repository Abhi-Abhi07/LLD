#include<iostream>
using namespace std;
class abc{
    public:
    int x;

    abc(){
        cout<<"default ctor call \n";
    }   
};
int main(){
    // abc a();//can't call default ctor 
    abc a;
    // abc *b=new abc;
    // abc *b=new abc();
    cout<<"end\n";

return 0;
}