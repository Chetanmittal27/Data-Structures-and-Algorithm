// finding nCr
#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    while (n > 0){
        fact = fact * n;
        n--;
    }
    return fact;
}


int main(){
    int n,r;
    cin>> n >> r;

    int nume = factorial(n);
    int deno = factorial(n-r) * factorial(r);
    int nCr = nume / deno;
    cout<< nCr;
    return 0;
}