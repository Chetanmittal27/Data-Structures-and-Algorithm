#include<iostream>
using namespace std;

bool isSorted (int arr[] , int n){

    if (n == 0){
        return true;
    }
    if (arr[n - 1] > arr [n]){
        return false;
    }

    return isSorted(arr , n - 1);
}

int main(){
    int arr[] = {1,2,7,3,4,5};
    int size = sizeof(arr) / sizeof(int);

    int n = size - 1;

    if (isSorted(arr , n)){
        cout<<"array is sorted";
    }

    else{
        cout<<"array is not sorted";
    }

    return 0;
}