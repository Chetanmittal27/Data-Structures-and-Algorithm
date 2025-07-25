/*
Maximum sum of non adjacent elements

Given an integer array nums of size n. Return the maximum sum possible using the elements of nums such that no two elements taken are adjacent in nums.
*/

// Approach-1 (Recursive Approach)
/*
#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &nums , int n , int i){

    if(i >= n){
        return 0;
    }

    int incl = nums[i] + solve(nums , n , i+2);
    int excl = 0 + solve(nums , n , i+1);

    return max(incl , excl);
}


int maxSum(vector<int> &nums){

    int n = nums.size();
    int i = 0;

    return solve(nums , n , i);
}

int main(){
    vector<int>nums = {2,1,4,9};
    cout << maxSum(nums);
    return 0;
}

*/


// Approach-2 (Top - Down Approach)
#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &nums , int n , int i , vector<int> &dp){

    if(i >= n){
        return 0;
    }

    if(dp[i] != -1){
        return dp[i];
    }

    int incl = nums[i] + solve(nums , n , i+2 , dp);
    int excl = 0 + solve(nums , n , i+1 , dp);

    dp[i] = max(incl , excl);
    return dp[i];
}


int maxSum(vector<int> &nums){

    int n = nums.size();
    int i = 0;
    vector<int>dp(n+1 , -1);

    return solve(nums , n , i , dp);
}

int main(){
    vector<int>nums = {2,1,4,9};
    cout << maxSum(nums);
    return 0;
}


// Approach-3
class Solution {
public:

    int rob(vector<int>& nums) {

        int n = nums.size();

        vector<int>dp(n , 0);
        dp[0] = nums[0];
        if(n > 1){
            dp[1] = max(dp[0] , nums[1]);
        }

        for(int i=2;i<n;i++){

            int incl = nums[i] + dp[i-2];
            int excl = dp[i-1] + 0;

            dp[i] = max(incl , excl);
        }

        return dp[n-1];
    }
};



// Approach-4