/*
Given a binary array nums and an integer goal, return the number of non-empty subarrays with a sum goal.
A subarray is a contiguous part of the array.
*/

// Brute Force approach
/*
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int numSubarraysWithSum(vector<int>&nums , int goal){

    int count = 0;
    for(int i=0;i<nums.size();i++){
        int sum = 0;
        for(int j=i;j<nums.size();j++){

            sum = sum + nums[j];

            if(sum == goal){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int>nums = {1,0,1,0,1};
    int goal = 2;

    cout << numSubarraysWithSum(nums , goal);
    return 0;
}
*/