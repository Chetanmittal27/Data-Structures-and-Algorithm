#include<iostream>
using namespace std;

int fibonacci(int n){

    int i = 0;
    int j = 1;

    for(int k = 2;k<=n;k++){
        int current = i + j;
        i = j;
        j = current;
    }

    return j;
}

int main(){
    int n;
    cin >> n;

    cout << fibonacci(n);
    return 0;
}