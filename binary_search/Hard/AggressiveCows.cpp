/*
Given an array nums of size n, which denotes the positions of stalls, and an integer k, which denotes the number of aggressive cows, assign stalls to k cows such that the minimum distance between any two cows is the maximum possible. Find the maximum possible minimum distance.
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;


int checkNoOfCows(vector<int>&nums , int distance){
    int count = 1;
    sort(nums.begin() , nums.end());
    unordered_map<int , bool>mpp;

    int last_placed = nums[0];
    mpp[nums[0]] = true;

    for(int i=1;i<nums.size();i++){
        if(nums[i] - last_placed >= distance){
            count++;
            last_placed = nums[i];
            mpp[nums[i]] = true;
        }
    }

    return count;
}

int aggressive_cows(vector<int>&nums , int k){
    sort(nums.begin() , nums.end());
    int low = 1;
    int high = nums.back() - nums.front();
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(checkNoOfCows(nums , mid) == k){
            ans = mid;
            low = mid + 1;
        }

        else if(checkNoOfCows(nums , mid) > k){
            low = mid + 1;
        }

        else{
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int>nums = {4,2,1,3,6};
    int k = 2;

    cout << aggressive_cows(nums , k);
    return 0;
}