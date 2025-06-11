#include<iostream>
#include<vector>
using namespace std;

int peak_element(vector<int>&arr){
    int n = arr.size();

    if(n == 1) return 0;
    if(arr[0] > arr[1]) return 0;
    if(arr[n-1] > arr[n-2]) return n-1;

    int low = 0;
    int high = n - 1;

    while(low <= high){
        int mid = (low + high) / 2;

        if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]){
            return mid;
        }

        else if(arr[mid] > arr[mid + 1]){
            high = mid - 1;
        }

        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    vector<int>arr1 = {1,2,3,4,5,6,7,8,5,1};
    vector<int>arr2 = {1,2,1,3,5,6,4};
    cout << peak_element(arr1) << endl;
    cout << peak_element(arr2);
    return 0;
}