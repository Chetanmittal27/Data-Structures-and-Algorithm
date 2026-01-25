#include<iostream>
using namespace std;

int calGCD(int a , int b){
    if(a == 0){
        return b;
    }

    if(b == 0){
        return a;
    }

    while(a != b){
        if(a > b){
            a = a - b;
        }

        if(b > a){
            b = b - a;
        }
    }

    return a;
}


int main(){
    int a , b;

    cin >> a >> b;

    cout << "GCD of two numbers a and b is " << calGCD(a , b) << endl;
    cout << "LCM of two numbers a and b is " << ((a * b) / calGCD(a , b)) << endl;
    
    return 0;
}