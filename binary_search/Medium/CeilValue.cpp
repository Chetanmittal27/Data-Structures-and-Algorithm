// The ceil value in the array is the smallest element in the array greater than or equal to x.
#include<iostream>
#include<vector>
using namespace std;

int ceil_value(vector<int>&arr , int x){
    int low = 0;
    int high = arr.size() - 1;
    int result = -1;

    while(low <= high){
        int mid = (low + high) / 2;

        if(arr[mid] == x){
            return arr[mid];
        }

        else if(arr[mid] < x){
            low = mid + 1;
        }

        else{
            result = arr[mid];
            high = mid - 1;
        }
    }
    return result;
}

int main(){
    vector<int>arr = {3,4,4,7,8,10};
    int x;
    cin >> x;

    cout << ceil_value(arr , x);
    return 0;
}