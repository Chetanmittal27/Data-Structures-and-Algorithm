#include<iostream>
using namespace std;

int fibonacci_no(int n){

    if (n == 1 || n == 2){
        return n-1;
    }

    else {
        return fibonacci_no(n-1) + fibonacci_no(n-2);
    }
}

int main(){
    int n;
    cin>>n;

    cout<<fibonacci_no(n);
    return 0;
}