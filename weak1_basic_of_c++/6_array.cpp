#include<iostream>
#include <string.h>
using namespace std;

void multipleOfTen(int arr[],int size){
    int num=10;
    for(int i=0; i<size; i++){
        arr[i]=10*(i+1);
    }
    for(int i=0; i<size; i++){
        cout<<num<<" * "<<i+1<<" :- "<<arr[i]<<endl;
    }
}

void sumOfEntireArrElement(int arr[],int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<"\nSum is :- "<<sum<<endl;
}

void reverseAnArray(int arr[],int size){
    int s=0;
    int e=size-1;
    while(s<e){
        swap(arr[s++],arr[e--]);
    }
}

void printArr(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void flipZeroOne(int arr[],int n){
    for(int i=0; i<n; i++){
        arr[i]==0 ? arr[i]=1 : arr[i]=0;
    }
}
int main(){
    int arr[10];
    int size=10;
    multipleOfTen(arr,size);

    sumOfEntireArrElement(arr,size);

    cout<<"\nBefore reversing arr : "<<endl;
    printArr(arr,size);
    reverseAnArray(arr,size); 
    cout<<"\nAfter reversing arr : "<<endl;
    printArr(arr,size);
    cout<<endl;

    int arr2[10];
    // arr2 each block conatin a specific value
    fill_n(arr2,size,-1);//its work any value
    // memset(arr2,0,sizeof(arr2));//work
    // memset(arr2,-1,sizeof(arr2));//work
    // memset(arr2,0,sizeof(arr2));//wrong becouse memset work byte by byte
    for(int i=0; i<10; i++){
        cout<<arr2[i]<<" ";
    }cout<<endl;

    int arr4[7]={1,0,0,0,1,1,0};
    cout<<"\nbefore fliping arr : "<<endl;
    printArr(arr4,7);
    flipZeroOne(arr4,7);
    cout<<"\nAfter flipping arr : "<<endl;
    printArr(arr4,7);
return 0;
}