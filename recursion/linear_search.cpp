#include<iostream>
using namespace std;

bool linear_search(int *arr , int n , int target){

    if (n < 0){
        return false;
    }

    if (arr[n] == target){
        return true;
    }

    linear_search(arr , n - 1 , target);
}

int main(){
    int arr[] = {10,54,34,5,2,64,32,90};
    int size = sizeof(arr) / sizeof(int);

    int n = size - 1;
    int target;
    cin>>target;

    if (linear_search(arr , n , target)){
        cout<<"given target is present";
    }

    else{
        cout<<"not present";
    }

    return 0;
}