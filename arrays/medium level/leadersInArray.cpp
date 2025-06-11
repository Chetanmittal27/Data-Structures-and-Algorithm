// Brute Force Approach
/*
#include<iostream>
#include<vector>
using namespace std;

vector<int> leaders(vector<int>&nums){
    vector<int>leader;
    int n = nums.size();

    for(int i=0;i<n;i++){
        int cnt = 0;
        for(int j=i+1;j<n;j++){
            if(nums[j] > nums[i]){
                break;
            }
            else{
                cnt++;
            }
        }
        if(cnt == n-i-1){
            leader.push_back(nums[i]);
        }
    }
    return leader;
}

int main(){
    vector<int>nums = {1,2,5,3,1,2};
    vector<int>result = leaders(nums);
    for(int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }
    return 0;
}
*/

// Optimal approach
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

vector<int> leaders(vector<int>&nums){
    vector<int>leader;
    int n = nums.size();
    int maxi = INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(nums[i] > maxi){
            leader.push_back(nums[i]);
            maxi = nums[i];
        }
    }
    reverse(leader.begin() , leader.end());
    return leader;
}

int main(){
    vector<int>nums = {1,2,5,3,1,2};
    vector<int>result = leaders(nums);
    for(int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }
    return 0;
}