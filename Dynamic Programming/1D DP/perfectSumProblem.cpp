/*
PERFECT SUM PROBLEM
Given an array arr of non-negative integers and an integer target, the task is to count all subsets of the array whose sum is equal to the given target.
*/

// Approach-1
/*
#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &arr , int target , int i){

    if(i == arr.size()) return target = 0 ? 1 : 0;

    if(target < 0) return 0;

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
*/



// Approach-2 (Top-Down Approach)
#include<iostream>
#include<vector>

using namespace std;

int solve(vector<int> &arr , int target , int i , vector<vector<int>> &dp){

    if(i == arr.size()) return target == 0 ? 1 : 0;

    if(target < 0) return 0;

    if(dp[i][target] != -1){
        return dp[i][target];
    }


    int include = solve(arr , target-arr[i] , i+1 , dp);
    int exclude = solve(arr , target , i+1 , dp);

    dp[i][target] = include + exclude;
    return dp[i][target];

}


int perfectSum(vector<int> &arr , int target){

    int i = 0;
    vector<vector<int>>dp(arr.size() , vector<int>(target+1 , -1));
    return solve(arr , target , i , dp);
}

int main(){
    vector<int>arr = {5,2,3,10,6,8};
    int target = 10;

    cout << perfectSum(arr , target);
    return 0;
}