#include<iostream>
using namespace std;

int  _1bits(int n){
    int count = 0;
    while (n != 0){
        count = count + (n & 1);
        n = n >> 1;
    }
    return count;
}

int main(){
    int n;
    cin>>n;

    cout<<_1bits(n);
    return 0;
}