#include<iostream>
#include"bird.h"
using namespace std;

void birdDoSomething(bird *&bird){
    bird->fly();
    bird->eat();
    bird->fly();
    bird->fly();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->fly();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->fly();
}

int main(){
    cout<<endl;

    // bird *bird=new sparrow();    
    // bird *bird=new eagle();
    bird *bird=new piggon();
    birdDoSomething(bird);

    cout<<endl;
return 0;
}