// Maximum number of consecutive ones
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int max_consecutiveOnes(int arr[] , int n){
    int count = 0;
    int max_count = 0;
    for(int i = 0 ;i<n;i++){
        if(arr[i]!=0){
            count++;
        }

        else{
            max_count = max(max_count , count);
            count = 0;
        }
    }
    max_count = max(max_count , count);
    return max_count;
}

int main(){
    int arr[] = {1,1,0,1,1,1,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << max_consecutiveOnes(arr , n);
    return 0;
}












class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        int count = 0;
        for(int i = 0;i<n;i++){
            if(nums[i] == 1){
                count++;
            }

            else{
                v.push_back(count);
                count = 0;
            }
        }
        v.push_back(count);
        int max = *max_element(v.begin(),v.end());
        return max;
    }
};