#include<iostream>
#include<vector>

using namespace std;

int triangularSum(vector<int> &nums){

    while(nums.size() != 1){

        vector<int>newNums(nums.size()-1);

        for(int i=0;i<newNums.size();i++){
            newNums[i] = (nums[i] + nums[i+1]) % 10;
        }

        triangularSum(newNums);
    }
    
    return nums[0];
}


int main(){
    vector<int>nums = {1,2,3,4,5};
    
    cout << triangularSum(nums);
    return 0;
}