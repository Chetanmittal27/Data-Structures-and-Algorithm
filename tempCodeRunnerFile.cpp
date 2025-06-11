// Left rotate an array by k places
#include<iostream>
using namespace std;

void left_rotate(int arr[] , int n , int k){

    for(int i=0;i<k;i++){
        for(int i=1;i<n;i++){
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout << "No. of places want to rotate" << endl;
    cin >> k;

    left_rotate(arr , n , k);
    return 0;
}