#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int minimumElement(vector<int>&nums){
    int low = 0;
    int high = nums.size() - 1;
    int small = INT_MAX;

    while(low <= high){
        int mid = (low + high) / 2;

        if(nums[low] <= nums[high]){
            return min(small , nums[low]);
        }

        if(nums[low] <= nums[mid]){
            small = min(small , nums[low]);
            low = mid + 1;
        }

        else{
            small = min(small , nums[mid]);
            high = mid - 1;
        }
    }
    return small;
}

int main(){
    vector<int>nums = {4,5,6,7,0,1,2};
    cout << minimumElement(nums);
    return 0;
}