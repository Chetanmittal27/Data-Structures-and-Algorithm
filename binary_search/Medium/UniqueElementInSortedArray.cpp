// You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once. Return the single element that appears only once.

// Brute force approach : Hash map -> O(nlogn);

// Better approach : XOR Function -> O(n);

// Optimal approach
#include<iostream>
#include<vector>
using namespace std;

int singleElement(vector<int>&arr){
    int n = arr.size();

    if(n == 1) return arr[0];
    if(arr[0] != arr[1]) return arr[0];
    if(arr[n-1] != arr[n-2]) return arr[n-1];

    int low = 1;
    int high = n - 2;

    while(low <= high){
        int mid = (low + high) / 2;

        if(arr[mid - 1] == arr[mid]){
            if(mid % 2 == 0){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        else if(arr[mid + 1] == arr[mid]){
            if(mid % 2 == 0){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        else{
            return arr[mid];
        }
    }
}

int main(){
    vector<int>arr = {1,1,2,3,3,4,4,8,8};
    cout << singleElement(arr);
    return 0;
}