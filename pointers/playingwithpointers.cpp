#include<iostream>
using namespace std;

int main(){

    // int *p = 0;
    // cout<<*p<<endl;


    int i = 5;
    int *q = &i;

    cout<<q<<endl;
    cout<<*q<<endl;

    int *p = 0;
    p = &i;

    cout<<p<<endl;
    cout<<*p<<endl;


    int num = 6;
    int a = num;
    a++;
    cout<<num<<" "<<a<<endl;



    int *pt = &num;
    cout<<"before "<<num<<endl;
    (*pt)++;
    cout<<"after "<<num<<endl;


    // copying a pointer.
    int *ptrr = pt;
    cout<< pt <<" "<<ptrr<<endl;
    cout<< *pt << " "<<*ptrr<<endl;

    // pointer to pointer
    int **ptr = &pt;
    cout<<pt << " --- "<<ptr<<endl;
    cout<<*pt <<" --- "<<**ptr<<endl;



    // pointer arithmetic.
    int b = 3;
    int *t = &b;

    cout<<*t << " " <<t<<endl;

    *t = *t + 1;
    cout<<*t<< " "<<t<<endl;

    t = t +1;
    cout<<t<<" "<<*t<<endl;




    

    return 0;



}