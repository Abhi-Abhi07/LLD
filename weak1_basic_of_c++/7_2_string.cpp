#include<iostream>
using namespace std;

int main(){
    // string name;
    // name.push_back('A');
    // name.push_back('b');
    // name.push_back('h');
    // name.push_back('i');
    // cout<<name<<endl;

    // char arr[100];
    // arr[0]='A';
    // arr[1]='b';
    // arr[2]='h';
    // arr[3]='i';
    // cout<<arr<<endl;


    string str1="Abhi";
    string str2="love";
    string str3="Bhai";
    string str4="statement";

    cout<<str1.length()<<endl;
    str2.append(str1);
    cout<<str2<<endl;
    str1.insert(0,"Ak");
    cout<<str1<<endl;
    cout<<str4.substr(1,3)<<endl;
    if(str1.compare(str2)==0){
        cout<<"String  are same "<<endl;
    }else{
        cout<<"String are not same "<<endl;
    }
    cout<<str4.find('t')<<endl;
    cout<<str4.find('t',2)<<endl;
    cout<<str4.find('t',6)<<endl;
    str4.replace(0,6,"Alright");
    cout<<str4<<endl;

    string s1="My name is Abhishek !";
    string s2="isi";
    // int ans=s1.find(s2);
    size_t ans=s1.find(s2);//size_t means unsigned integer
    if(ans==string::npos){
        cout<<"s2 are not available in s1"<<endl;
        cout<<(int(string::npos))<<endl;
        cout<<size_t(string::npos)<<endl;
    }else{
        cout<<"Found"<<endl;
    }

return 0;
}