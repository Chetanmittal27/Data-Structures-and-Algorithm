/*
Given an array of integers nums and an integer threshold, we will choose a positive integer divisor, divide all the array by it, and sum the division's result. Find the smallest divisor such that the result mentioned above is less than or equal to threshold.

Each result of the division is rounded to the nearest integer greater than or equal to that element. (For example: 7/3 = 3 and 10/2 = 5).

*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int DivisionSum(vector<int>&nums , int b){
    int sum = 0;
    for(int i=0;i<nums.size();i++){
        sum = sum + (nums[i] + b - 1) / b;
    }
    return sum;
}

int SmallestDivisor(vector<int>&nums , int threshold){
    int low = 1;
    int high = *max_element(nums.begin() , nums.end());
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(DivisionSum(nums , mid) == threshold){
            ans = mid;
            high = mid - 1;
        }

        else if(DivisionSum(nums , mid) > threshold){
            low = mid + 1;
        }

        else{
            ans = mid;
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int>nums = {44,22,33,11,1};
    int threshold = 5;

    cout << SmallestDivisor(nums , threshold);
    return 0;
}