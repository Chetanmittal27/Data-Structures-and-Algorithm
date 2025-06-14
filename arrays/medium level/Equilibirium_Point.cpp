/*
Given an array of integers arr[], the task is to find the first equilibrium point in the array.

The equilibrium point in an array is an index (0-based indexing) such that the sum of all elements before that index is the same as the sum of elements after it. Return -1 if no such point exists. 
*/

// Brute Force
/*

#include<iostream>
#include<vector>
using namespace std;

int equilibiriumPoint(vector<int>&arr){

    int n = arr.size();
    for(int i=1;i<n-1;i++){

        int lsum = 0 , rsum = 0;
        
        for(int j=0;j<n;j++){

            if(j < i){
                lsum = lsum + arr[j];
            }

            if(j > i){
                rsum = rsum + arr[j];
            }
        }
        if(lsum == rsum){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int>arr = {1,2,0,3};
    cout << equilibiriumPoint(arr);
    return 0;
}

*/


// Better approach
