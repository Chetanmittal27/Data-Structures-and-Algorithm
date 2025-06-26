#include<iostream>
using namespace std;

int main(){
    char name[20];

    cout<<"Enter your name"<<endl;
    cin>>name;

    cout<<"size is"<<endl;
    cout<<sizeof(name)<<endl;


    cout<<"Your name is"<<endl;
    cout<<name;

    return 0;
}