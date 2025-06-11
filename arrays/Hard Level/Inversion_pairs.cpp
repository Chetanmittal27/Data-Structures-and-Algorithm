/*
Given an integer array nums. Return the number of inversions in the array.

Two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

It indicates how close an array is to being sorted.
A sorted array has an inversion count of 0.
An array sorted in descending order has maximum inversion.
*/

#include<iostream>
#include<vector>
using namespace std;

int Merge(vector<int>&arr , int low , int high){
    int mid = (low + high) / 2;
    int left = 0;
    int right = mid + 1;

    vector<int>ans;
    int cnt = 0;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            ans.push_back(arr[left]);
            left++;
        }

        else if(arr[right] <= arr[left]){
            cnt = cnt + (mid - left + 1);
            ans.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        ans.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        ans.push_back(arr[right]);
        right++;
    }

    for(int i=0;i<arr.size();i++){
        arr[low + i] = ans[i];
    }

    return cnt;
}

int Merge_sort(vector<int>&arr , int low , int high){
    int cnt = 0;
    if(low >= high) return 0;
    else{
        int mid = (low + high) / 2;
        cnt += Merge_sort(arr , low , mid);
        cnt += Merge_sort(arr , mid + 1 , high);
        cnt += Merge(arr , low , high);
    }
    return cnt;
}

int main(){
    vector<int>arr = {2,3,7,1,3,5};
    cout << Merge_sort(arr , 0 , arr.size() - 1);
    return 0;
}