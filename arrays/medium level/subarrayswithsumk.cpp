// Number of subarrays of a given array with sum equals to k.

// Optimal Approach
#include<iostream>
#include<vector>
#include<map>
using namespace std;

int subarraySum(vector<int>&nums , int k){

    int prefixSum = 0;
    int count = 0;

    map<int , int>mpp;
    
    mpp[0] = 1;

    for(int i=0;i<nums.size();i++){
        prefixSum = prefixSum + nums[i];

        int remove = prefixSum - k;

        count = count + mpp[remove];

        mpp[prefixSum]++;
    }
    return count;
}

int main(){
    vector<int>nums = {1,2,3,-3,1,1,1,4,2,-3};
    int k = 3;

    cout << subarraySum(nums , k);
    return 0;
}