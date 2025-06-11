// Left Rotate By one place
#include<iostream>
using namespace std;

void left_rotate(int arr[] , int n){
    for(int i=1;i<n;i++){
        int temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    left_rotate(arr,n);
    return 0;
}