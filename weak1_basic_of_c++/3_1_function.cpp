#include<iostream>
using namespace std;

void printCounting(int n){
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }cout<<endl;
}

int findSimpleInterest(int principleAmount,int rateOfInterst, int timeInYear){
    int si=(principleAmount*rateOfInterst*timeInYear)/100;
    return si;
}

void printPrimeNumber(){
    int num=2;
    int cnt=0;
    while(num<=100){
        bool prime=1;
        for(int i=2; i<=50; i++){
            if(num>i && num%i==0){
                prime=0;
                break;
            }
        }
        if(prime){
            cout<<num<<" ";
            cnt++;
        }
        num++;
    }
    cout<<"\n1 to 100 total no of prime : "<<cnt<<endl;
}

void checkEligibiltyForVoting(int age){
    if(age>=18){
        cout<<"Yes, you can take vote !"<<endl;
    }
    else{
        cout<<"No, yo can't take vote !"<<endl;
    }
}

int sipCalculator(int p, int n, int i){
    // i : periodicRateOfInterast
    // p : regBasesPayment
    // n : noOfPayment
    int sip = p * (( (1 + i)^n - 1) / i) * (1 + i);
    return sip;
}

int main(){

    // printCounting(15);

    // cout<<findSimpleInterest(1000,2,10)<<endl;

    // printPrimeNumber();
    
    // int age;
    // cout<<"Enter your age : ";
    // cin>>age;
    // checkEligibiltyForVoting(age);

    cout<<sipCalculator(100,25,5);
return 0;
}