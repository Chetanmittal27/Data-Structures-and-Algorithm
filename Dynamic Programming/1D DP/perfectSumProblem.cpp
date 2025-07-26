/*
PERFECT SUM PROBLEM
Given an array arr of non-negative integers and an integer target, the task is to count all subsets of the array whose sum is equal to the given target.
*/

// Approach-1
#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &arr , int target , int i){

    if(i == arr.size()) return target = 0 ? 1 : 0;

    int include = solve(arr , target-arr[i] , i+1);
    int exclude = solve(arr , target , i+1);

    return include + exclude;
}


int perfectSum(vector<int> &arr , int target){

    int i = 0;
    return solve(arr , target , i);
}


int main(){
    vector<int>arr = {5, 2, 3, 10, 6, 8};
    int target = 10;

    cout << perfectSum(arr , target);
    return 0;
}