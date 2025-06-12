/*
Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.
*/

// Brute Force Approach
// Time Complexity : O(n^2)

/*
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxConsecutiveOnes(vector<int>&nums , int k){
    int maxLength = 0;

    for(int i=0;i<nums.size();i++){

        int count = 0;

        for(int j=i;j<nums.size();j++){

            if(nums[j] == 0){
                count++;
            }

            if(count > k){
                break;
            }
            maxLength = max(maxLength , j - i + 1);
        }
    }
    return maxLength;
}
*/


// Better Approach
/*
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
          int l = 0 , r = 0;
          int maxLength = 0;
          int zeros = 0;
 
          while(r < nums.size()){

            if(nums[r] == 0){
                zeros++;
            }

            while(zeros > k){
                if(nums[l] == 0) zeros--;
                l++;
            }
            maxLength = max(maxLength , r-l+1);
            r++;
          }
          return maxLength;
    }
};
*/

// Optimal appraoch
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
          int l = 0 , r = 0;
          int zeros = 0;
          int maxLength = 0;

          while(r < nums.size()){

            if(nums[r] == 0){
                zeros++;
            }

            if(zeros > k){
                if(nums[l] == 0) zeros--;
                l++;
            }

            maxLength = max(maxLength , r-l+1);
            r++;
          }
          return maxLength;
    }
};