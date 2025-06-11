// Given a sorted array of nums and an integer x, write a program to find the lower bound of x. The lower bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than or equal to a given key i.e. x. If no such index is found, return the size of the array.

#include<iostream>
#include<vector>
using namespace std;

int LowerBound(vector<int>&arr , int x){
    int low = 0;
    int high = arr.size() - 1;

    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == x){
            if(arr[mid-1] == x){
                high = mid - 1;
            }
            return mid;
        }

        else if(arr[mid] < x){
            low = mid + 1;
        }

        else if(mid == low){
            if(arr[mid] >= x){
                return mid;
            }
        }

        else{
            high = mid - 1;
        }
    }
}

int main(){
    vector<int>arr = {3,5,8,15,19};
    int x;
    cin >> x;

    cout << LowerBound(arr , x);
    return 0;
}