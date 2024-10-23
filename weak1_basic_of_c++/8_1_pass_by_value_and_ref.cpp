#include<iostream>
using namespace std;

void solve1(int *arr){
    cout<<"inside solve1 : "<<sizeof(arr)<<endl;
    cout<<arr<<endl;
}
void solve2(int arr[]){
    cout<<"inside solve2 : "<<sizeof(arr)<<endl;
    cout<<arr<<endl;
}
int main(){
    int arr[]={3,5,2,5,7};
    cout<<"inside main : "<<sizeof(arr)<<endl;
    solve1(arr);
    solve2(arr);
return 0;
}