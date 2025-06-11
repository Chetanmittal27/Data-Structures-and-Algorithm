/*
You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

You should return the array of nums such that the the array follows the given conditions:

Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.
*/

// Brute force approach
/*
#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrangeArray(vector<int>&nums){
    int n = nums.size();
    vector<int>positive;
    vector<int>negative;

    for(int i=0;i<n;i++){
        if(nums[i] < 0){
            negative.push_back(nums[i]);
        }
        else{
            positive.push_back(nums[i]);
        }
    }

    for(int i=0;i<n/2;i++){
        nums[2*i] = positive[i];
        nums[(2*i) + 1] = negative[i];
    }
    return nums;
}

int main(){
    vector<int>nums = {3,1,-2,-5,2,-4};
    cout << rearrangeArray(nums);
    return 0;
}
*/

// Optimal approach
#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrangeArray(vector<int>&nums){
    vector<int>temp(n , 0);
    int positive = 0;
    int negative = 1;

    for(int i=0;i<nums.size();i++){
        if(nums[i] < 0){
            temp[negative] = nums[i];
            negative = negative + 2;
        }

        else{
            temp[positive] = nums[i];
            positive = positive + 2;
        }
    }
    return temp;
}