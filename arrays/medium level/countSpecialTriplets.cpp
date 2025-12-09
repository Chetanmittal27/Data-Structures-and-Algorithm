/*
You are given an integer array nums.

A special triplet is defined as a triplet of indices (i, j, k) such that:

0 <= i < j < k < n, where n = nums.length
nums[i] == nums[j] * 2
nums[k] == nums[j] * 2
Return the total number of special triplets in the array.

Since the answer may be large, return it modulo 109 + 7
*/


// Brute Force

#include<iostream>
#include<vector>

using namespace std;

const int MOD = 1e9 + 10;

int specialTriplets(vector<int>& nums){

    int n = nums.size();

    long long count = 0;

    for(int i=0;i<n-2;i++){

        for(int j=i+1;j<n-1;j++){

            for(int k=j+1;k<n;k++){

                if(nums[i] == nums[k]  &&  nums[i] == 2 * nums[j]){

                    count++;
                }
            }
        }
    }

    return int(count % MOD);
}

int main(){

    vector<int>nums = {8,4,2,8,4};
    
    cout << specialTriplets(nums);

    return 0;
}