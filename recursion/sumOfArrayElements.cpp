#include<iostream>
using namespace std;

int sumOFelements(int arr[] , int n){

    if (n < 0){
        return 0;
    }

    return arr[n] + sumOFelements(arr , n - 1);
}


int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(int);

    int n = size - 1;

    cout<<sumOFelements(arr , n);
    return 0;
}