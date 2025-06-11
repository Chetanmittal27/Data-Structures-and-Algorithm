#include<iostream>
#include<vector>
using namespace std;

void Merge(int arr[] , int low , int high){
    vector<int>tempArr;

    int mid = (low + high) / 2;
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            tempArr.push_back(arr[left]);
            left++;

        }

        else if(arr[left] >= arr[right]){
            tempArr.push_back(arr[right]);
            right++;
        }
    }
    
    while(left <= mid){
        tempArr.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        tempArr.push_back(arr[right]);
        right++;
    }

    for(int i=0;i<tempArr.size();i++){
        arr[low+i] = tempArr[i];
    }
}

void Merge_sort(int arr[] , int low , int high){
    if(low == high) return;
    if(low < high){
        int mid = (low + high)/2;
        Merge_sort(arr , low , mid);
        Merge_sort(arr , mid+1 , high);

        Merge(arr , low , high);
    }
}

int main(){
    int arr[] = {38,27,43,3,9,82,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    Merge_sort(arr , 0 , n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}