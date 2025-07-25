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