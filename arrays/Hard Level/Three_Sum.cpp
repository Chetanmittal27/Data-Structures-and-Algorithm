// Brute Approach : O(n^3)
/*
#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<vector<int>> threeSum(vector<int>&nums){
    set<vector<int>> uniqueVectors;
    vector<vector<int>>result;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            for(int k=j+1;k<nums.size();k++){
                
                if(nums[i] + nums[j] + nums[k] == 0){
                    vector<int>v = {nums[i] , nums[j] , nums[k]};
                    sort(v.begin() , v.end());

                    if(uniqueVectors.find(v) == uniqueVectors.end()){
                        uniqueVectors.insert(v);
                    }
                }
            }
        }
    }

    for(auto it : uniqueVectors){
        result.push_back(it);
    }

    return result;
}
*/

// Better Approach
/*
class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>result;
        set<vector<int>>uniqueArrays;
        
        for(int i=0;i<n;i++){
            set<int>s;
            for(int j=i+1;j<n;j++){
                int k = -(nums[i] + nums[j]);

                if(s.find(k) != s.end()){
                    vector<int>v = {nums[i] , nums[j] , k};

                    sort(v.begin() , v.end());
                    if(uniqueArrays.find(v) == uniqueArrays.end()){
                        uniqueArrays.insert(v);
                    }
                }
                s.insert(nums[j]);
            }
        }

        for(auto it : uniqueArrays){
            result.push_back(it);
        }
        return result;
    }
};
*/

// optimal appraoch
class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>result;

        sort(nums.begin() , nums.end());
        set<vector<int>>s;

        for(int i=0;i<n;i++){
            int j = i+1;
            int k = n-1;

            while(j < k){
                if(nums[i] + nums[j] + nums[k] == 0){
                    vector<int>v = {nums[i] , nums[j] , nums[k]};

                    if(s.find(v) == s.end()){
                        s.insert(v);
                    }
                    j++;
                    k--;
                }

                else if(nums[i] + nums[j] + nums[k] > 0){
                    k--;
                }

                else{
                    j++;
                }
            }
        }
        for(auto it : s){
            result.push_back(it);
        }
        return result;
    }
};