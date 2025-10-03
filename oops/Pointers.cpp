#include<iostream>
using namespace std;

int main(){

    int num = 5;

    cout << num << endl;

    // Address of Operator - &
    cout << "Address of num is " << &num << endl;

    int *ptr = &num;
    cout << "Value is : " << *ptr << endl;
    cout << "Address is : " << ptr << endl;


    // double datatype
    double d = 4.3;
    double *p2 = &d;

    cout << "Address is : " << p2 << endl;
    cout << "Value is : " << *p2 << endl;


    // Bad Practice : Pointer to int is created and pointing to some garbage address
    int *p3;
    cout << "Address is : " << p3 << endl;
    cout << "Value is : " << *p3 << endl;



    // 
    int n = 5;
    int *pt = &n;
    int a = *pt;
    a++;
    cout << n << endl;


    // 
    int m = 5;
    int *ptr2 = &m;
    (*ptr2)++;
    cout << m << endl;



    // Copying a pointer
    int *patlu = pt;
    cout << pt << "--" << patlu << endl;
    cout << *pt << "--" << *patlu << endl;

    return 0;
}