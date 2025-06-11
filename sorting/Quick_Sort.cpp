#include<iostream>
#include<algorithm>
using namespace std;

int quick(int arr[] , int low , int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j){
        while(arr[i] <= pivot && i < high){
            i++;
        }

        while(arr[j] >= pivot && j > low){
            j--;
        }

        if(i < j){
            swap(arr[i] , arr[j]);
        }
    }

    swap(arr[low] , arr[j]);
    return j;
}


void QuickSort(int arr[] , int low , int high){
    if(low < high){
        int partitionIndex = quick(arr , low , high);
        QuickSort(arr , low , partitionIndex-1);
        QuickSort(arr , partitionIndex + 1 , high);
    }
}

int main(){
    int arr[] = {4,6,2,5,7,9,1,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    QuickSort(arr , 0 , n - 1);
    
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}