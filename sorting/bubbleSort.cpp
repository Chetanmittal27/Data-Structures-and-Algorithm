#include<iostream>
#include<algorithm>
using namespace std;

void bubble_sort(int arr[] , int n){

    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){

            if (arr[j+1] < arr[j]){
                swap(arr[j+1] , arr[j]);
            }
        }
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i] << " ";
    }
}

int main(){
    int arr[] = {64,25,12,22,11};
    int n = sizeof(arr) / sizeof(int);

    bubble_sort(arr,n);
    return 0;
}