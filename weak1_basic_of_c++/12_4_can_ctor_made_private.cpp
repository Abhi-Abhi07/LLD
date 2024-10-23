#include<iostream>
using namespace std;
class Box{
    public:
    int width;
    
    private:
    Box(int _w):width(_w){
        cout<<"Box private ctor call \n";
    }   
    public:
    int getWidth()const{
        return width;
    }

    void setWidth(int _w){
        width=_w;
    }
    friend class Boxfactory;
};

class Boxfactory{
    public:
    int count;
    Boxfactory(){count=0;}
    Box getBox(int _w){
        count++;
        return Box(_w);
    }
};

int main(){
    
    Boxfactory bfact;
    Box b=bfact.getBox(5);
    cout<<b.getWidth()<<endl;
    cout<<bfact.count<<endl;
    cout<<"End\n";

return 0;
}