#include<iostream>
using namespace std;

bool isSorted(int arr[] , int n){
    for(int i=0;i<n-1;i++){
        if(arr[i+1] < arr[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int arr[] = {1,2,2,3,3,4};
    int arr1[] = {1,2,1,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int n1 = sizeof(arr1) / sizeof(arr[0]);

    if(isSorted(arr1 , n1)){
        cout << "Array is sorted" << endl;
    }

    else{
        cout << "Array is not sorted" << endl;
    }

    return 0;
}