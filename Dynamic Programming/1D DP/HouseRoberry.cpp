/*
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.
*/


// Approach-1 (Recursion)
#include<iostream>
#include<vector>
using namespace std;


int solve(vector<int> &nums , int n){
    
    if(n < 0) return 0;
    if(n == 0) return nums[0];

    int incl = nums[n] + solve(nums , n-2);
    int excl = 0 + solve(nums , n-1);

    return max(incl , excl);
}


int rob(vector<int> &nums){

    int n = nums.size();

    if(n == 1) return nums[0];

    vector<int>first , second;

    for(int i=0;i<n;i++){
        if(i != n-1){
            first.push_back(nums[i]);
        }

        if(i != 0){
            second.push_back(nums[i]);
        }
    }


    return max(solve(first , n-2) , solve(second , n-2));
}

int main(){
    vector<int>nums = {1,2,3,1};
    cout << rob(nums);
    return 0;
}


// Approach-2 (Top-Down Approach)
#include<iostream>
#include<vector>
using namespace std;


int solve(vector<int> &nums , int n , vector<int> &dp){
    
    if(n < 0) return 0;
    if(n == 0) return nums[0];

    if(dp[n] != -1) return dp[n];

    int incl = nums[n] + solve(nums , n-2);
    int excl = 0 + solve(nums , n-1);

    dp[n] = max(incl , excl);
    return dp[n];
}


int rob(vector<int> &nums){

    int n = nums.size();

    if(n == 1) return nums[0];

    vector<int>first , second;

    for(int i=0;i<n;i++){
        if(i != n-1){
            first.push_back(nums[i]);
        }

        if(i != 0){
            second.push_back(nums[i]);
        }
    }

    vector<int>dp1(n-1 , -1);
    vector<int>dp2(n-1 , -1);


    return max(solve(first , n-2 , dp1) , solve(second , n-2 , dp2));
}

int main(){
    vector<int>nums = {1,2,3,1};
    cout << rob(nums);
    return 0;
}



// Approach-3 (Bottom - up approach)
class Solution {
public:

    int solve(vector<int> &nums , int n , vector<int> &dp){

        dp[0] = nums[0];

        if(n > 1){
            dp[1] = max(nums[1] , dp[0]);
        }

        for(int i=2;i<n;i++){
            int incl = nums[i] + dp[i-2];
            int excl = 0 + dp[i-1];

            dp[i] = max(incl , excl);
        }

        return dp[n-1];
    }


    int rob(vector<int>& nums) {
        
        int n = nums.size();

        if(n == 1) return nums[0];

        vector<int>first , second;

        for(int i=0;i<n;i++){
            if(i != n-1){
                first.push_back(nums[i]);
            }

            if(i != 0){
                second.push_back(nums[i]);
            }
        }

        vector<int>dp1(n-1 , -1);
        vector<int>dp2(n-1 , -1);


        return max(solve(first , n-1 , dp1) , solve(second , n-1 , dp2));
    }
};


// Approach-4 (Space optimization)
class Solution {
public:

    int solve(vector<int> &nums , int n){

        if(n == 0) return 0;
        if(n == 1) return nums[0];

        int prev2 = nums[0];

        int prev1  = max(nums[1] , prev2);

        for(int i=2;i<n;i++){
            int incl = nums[i] + prev2;
            int excl = 0 + prev1;

            prev2 = prev1;
            prev1 = max(incl , excl);
        }

        return prev1;
    }


    int rob(vector<int>& nums) {
        
        int n = nums.size();

        if(n == 1) return nums[0];

        vector<int>first , second;

        for(int i=0;i<n;i++){
            if(i != n-1){
                first.push_back(nums[i]);
            }

            if(i != 0){
                second.push_back(nums[i]);
            }
        }

        // vector<int>dp1(n-1 , -1);
        // vector<int>dp2(n-1 , -1);


        return max(solve(first , n-1) , solve(second , n-1));
    }
};