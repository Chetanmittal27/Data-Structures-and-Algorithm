#include<iostream>
using namespace std;

void pointer(int *ptr){
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

}

void update(int *ptr){
    // ptr = ptr + 1;
    // cout<<ptr<<endl;

    *ptr = *ptr + 1;
}


int main(){
    int value = 5;
    int *ptr = &value;
    // pointer(ptr);

    // cout<<"before updating"<<endl <<ptr<<endl;
    // update(ptr);
    // cout<<"after updating"<<endl<<ptr;
    // cout<<endl;

    cout<<*ptr<<endl;
    update(ptr);
    cout<<*ptr<<endl;


    return 0;
}