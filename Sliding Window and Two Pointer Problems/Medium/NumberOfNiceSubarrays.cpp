// Given an array of integers nums and an integer k. A continuous subarray is called nice if there are k odd numbers on it. Return the number of nice sub-arrays.

// Brute force approach
/*

#include<iostream>
#include<vector>

using namespace std;

int numberofSubarrays(vector<int>&nums , int k){

    int number = 0;
    for(int i=0;i<nums.size();i++){

        int count = 0;

        for(int j=i;j<nums.size();j++){

            if(nums[j] % 2 != 0){
                count++;
            }

            if(count == k){
                number++;
            }

            else if(count > k){
                break;
            }
        }
    }
    return number;
}

*/

// Optimal appraoch
class Solution {
public:

    int counterSubarrays(vector<int>&nums , int k){
        int numberSubarrays = 0;
        int l=0;
        int r=0;

        int sum = 0;

        while(r < nums.size()){
            sum = sum + (nums[r] % 2);

            while(sum > k){
                sum = sum - (nums[l] % 2);
                l++;
            }

            numberSubarrays = numberSubarrays + (r - l + 1);
            r++;
        }
        return numberSubarrays;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        int result = counterSubarrays(nums , k) - counterSubarrays(nums , k-1);
        return result;
    }
};