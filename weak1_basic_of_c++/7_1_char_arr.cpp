#include<iostream>
#include<cstring>
using namespace std;
int getLen(char arr[]){
    int cnt=0;
    while(arr[cnt]!='\0'){
        cnt++;
    }
    return cnt;
}
char * add(char a1[],char a2[]){
    char *ans=new char[10];
    int i=0;
    int k=0;
    while(a1[i]!='\0'){
        ans[k++]=a1[i++];
    } 
    i=0;
    while(a2[i]!='\0'){
        ans[k++]=a2[i++];
    }
    ans[k]='\0';
    cout<<ans<<endl;
    return ans;
}
int main(){
    int arr0[5]={3,45,6,6,7};
    cout<<arr0<<endl;

    char arr[5]="Abhi";
    cout<<arr<<endl;
    // char arr2[5];
    // arr2[0]='A';
    // arr2[1]='b';
    // arr2[2]='h';
    // arr2[3]='i';
    // arr2[4]='\0';
    // cout<<arr2<<endl;

    cout<<getLen(arr)<<endl;

    char arr3[5]="Bhai";
    char *res=add(arr,arr3);
    cout<<"**  "<<res<<endl;
    delete []res;

    char a[5]="abcd";
    // a="xyz"; //can't modify
    strcpy(a,"xyz");
    cout<<a<<endl;
    a[0]='p';
    a[1]='q';
    a[2]='\0';
    cout<<a<<endl;
    // int ar[5]={4,5,3,5};
    // ar[4]={3};
    // cout<<ar[0]<<ar[4]<<endl;
return 0;
}