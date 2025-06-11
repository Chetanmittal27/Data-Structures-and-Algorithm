#include<iostream>
using namespace std;

int main(){
    // int arr[10] = {1,0,1};
    // cout<<"address of first memory block"<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<*arr<<endl;
    // // cout<<*arr[1]<<endl;
    // cout<<*arr + 1 << endl;
    // cout<<*(arr+1)<<endl;


    // int i = 2;
    // cout<<i[arr];



    int temp[10];
    cout<<sizeof(temp)<<endl;

    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;



    int a[20]={1,2,3,4};
    int *p = &a[0];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    return 0;



}