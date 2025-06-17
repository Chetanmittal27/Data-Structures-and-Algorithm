// Given a binary array nums and an integer goal, return the number of non-empty subarrays with a sum goal. A subarray is a contiguous part of the array.

// Brute force approach
// Time Complexity : O(n^2)
// Space Complexity : O(1)
/*

#include<iostream>
#include<vector>
using namespace std;

int numSubarraysWithSum(vector<int>&nums , int goal){
    int count = 0;
    int n = nums.size();

    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum = sum + nums[j];

            if(sum == goal) count++;
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

// Better approach : using extra space
// Time Complexity : O(n)
// Space Complexity : O(n)

/*

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int numSubarraysWithSum(vector<int>&nums , int goal){

    int n = nums.size();
    unordered_map<int , int>mpp;
    int prefixSum = 0;
    int cnt = 0;

    mpp[0] = 1;

    for(int i=0;i<n;i++){
        prefixSum = prefixSum + nums[i];
        int remove = prefixSum - goal;
        cnt = cnt + mpp[remove];
        mpp[prefixSum]++;
    }
    return cnt;
}

int main(){
    vector<int>nums = {1,0,1,0,1};
    int goal = 2;

    cout << numSubarraysWithSum(nums , goal);
    return 0;
}

*/

// Optimal Approach
#include<iostream>
#include<vector>
using namespace std;

int numberSubarray(vector<int>&nums , int goal){
    int l = 0;
    int r = 0;

    int count = 0;
    int sum = 0;
    while(r < nums.size()){

        sum = sum + nums[r];

        while(sum > goal){
            sum = sum - nums[l];
            l++;
        }

        count = count + (r - l + 1);
        r++;
    }

    return count;
}


int numSubarrayWithSum(vector<int>&nums , int goal){
    if(goal == 0) return numberSubarray(nums , goal);

    int result = numberSubarray(nums , goal) - numberSubarray(nums , goal-1);
    return result;
}

int main(){
    vector<int>nums = {1,0,1,0,1};
    int goal = 2;

    cout << numSubarrayWithSum(nums , goal);
    return 0;
}