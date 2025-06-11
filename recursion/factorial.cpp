#include<iostream>
using namespace std;

int factorialOfNumber(int n){

    if (n == 0){
        return 1;
    }

    else{
        return n * factorialOfNumber(n-1);
    }
}

int main(){
    int n;
    cin >> n;

    cout<<"factorial of number is"<<endl;
    cout<<factorialOfNumber(n);
    return 0;
}