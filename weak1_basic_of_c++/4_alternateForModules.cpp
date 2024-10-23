#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //  = a%b=a-floor(a/b)*b;
    // cout<<(-7>>1)<<endl;
    float a=10.5;
    float b=3.2;
    float ans=a-floor(a/b)*b;
    cout<<ans<<endl;
return 0;
}