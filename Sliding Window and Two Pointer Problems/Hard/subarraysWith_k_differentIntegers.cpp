/* Given an integer array nums and an integer k, return the number of good subarrays of nums.

A good array is an array where the number of different integers in that array is exactly k.

For example, [1,2,3,1,2] has 3 different integers: 1, 2, and 3.
A subarray is a contiguous part of an array.

*/

// Brute force approach
// Time Complexity : O(n^2)
// Space Complexity : O(n)

/*

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subarraysWithKDistinct(vector<int>& nums, int k) {
    int n = nums.size();
    int result = 0;

    for(int i=0;i<n;i++){
        unordered_map<int,int>mpp;

        for(int j=i;j<n;j++){
            mpp[nums[j]]++;

            if(mpp.size() == k){
                result++;
            }

            else if(mpp.size() > k){
                break;
            }
        }
    }
    return result;
}

int main(){
    vector<int>nums = {1,2,1,2,3};
    int k = 2;

    cout << subarraysWithKDistinct(nums , k);
    return 0;
}


*/

// Optimal approach
class Solution {
public:
    int counterSubarrays(vector<int>& nums, int k) {
        
        int n = nums.size();
        unordered_map<int , int>mpp;
        int l = 0;
        int r = 0;

        int result = 0;

        while(r < n){
            mpp[nums[r]]++;
            
            while(mpp.size() > k){
                mpp[nums[l]]--;
                if(mpp[nums[l]] == 0){
                    mpp.erase(nums[l]);
                }

                l++;
            }

            result = result + (r - l + 1);
            r++;
        }
        return result;
    }

    int subarraysWithKDistinct(vector<int>&nums , int k){
        int result = counterSubarrays(nums , k) - counterSubarrays(nums , k-1);
        return result;
    }
};