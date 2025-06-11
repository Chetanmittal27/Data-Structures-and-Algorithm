// Return all the integers which are coming more than n/3 times in array

// Brute force : O(n^2)

// Better approach : O(nlogn)
/*
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int>majorityElement(vector<int>&arr){
    vector<int>ans;
    unordered_map<int , int>mpp;
    int n = arr.size();

    for(int i=0;i<arr.size();i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        if(it.second > n/3){
            ans.push_back(it.first);
        }
    }
    return ans;
}

int main(){
    vector<int>arr = {11,33,33,11,33,11};
    vector<int>result = majorityElement(arr);
    for(int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }
}
*/

// Optimal approach : Boyer Moores Voting Algorithm
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0 , count2 = 0;
        int ele1 = INT_MIN , ele2 = INT_MIN;
        int n = nums.size();
        vector<int>ans;

        if(n == 0){
            return ans;
        }

        if(n == 1){
            return {nums[0]};
        }

        for(int i=0;i<n;i++){
            if(count1 == 0 && nums[i] != ele2){
                count1 = 1;
                ele1 = nums[i];
            }

            else if(count2 == 0 && nums[i] != ele1){
                count2 = 1;
                ele2 = nums[i];
            }

            else if(nums[i] == ele1){
                count1++;
            }

            else if(nums[i] == ele2){
                count2++;
            }

            else{
                count1--;
                count2--;
            }
        }

        int cnt1 = 0;
        int cnt2 = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == ele1){
                cnt1++;
            }
            if(nums[i] == ele2){
                cnt2++;
            }
        }

        if(cnt1 > n/3){
            ans.push_back(ele1);
        }
        
        if(cnt2 > n/3 && ele2!= ele1){
            ans.push_back(ele2);
        }
        return ans;
    }
};