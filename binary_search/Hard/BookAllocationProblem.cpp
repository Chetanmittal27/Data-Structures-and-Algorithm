/*
Given an array nums of n integers, where nums[i] represents the number of pages in the i-th book, and an integer m representing the number of students, allocate all the books to the students so that each student gets at least one book, each book is allocated to only one student, and the allocation is contiguous.

Allocate the books to m students in such a way that the maximum number of pages assigned to a student is minimized. If the allocation of books is not possible, return -1.
*/


#include<iostream>
#include<vector>
#include<climits>
#include<numeric>
#include<algorithm>
using namespace std;

int checkBookallocated(vector<int>&nums , int pages){
        int count = 1;
        int sum = 0;

        for(int i=0;i<nums.size();i++){
            if(nums[i] > pages){
                return INT_MAX;
            }

            else if(sum + nums[i] > pages){
                count++;
                sum = nums[i];
            }

            else{
                sum = sum + nums[i];
            }
        }
        return count;
}

int findPages(vector<int>&nums , int m){
    int low = *max_element(nums.begin() , nums.end());
    int high = accumulate(nums.begin() , nums.end() , 0);

    int ans = INT_MAX;
    
    while(low <= high){
        int mid = low + (high - low) / 2;

        if(checkBookallocated(nums , mid) == m){
            ans = mid;
            high = mid - 1;
        }

        else if(checkBookallocated(nums , mid) > m){
            low = mid + 1;
        }

        else{
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int>nums1 = {12,34,67,90};
    vector<int>nums2 = {25, 46, 28, 49, 24};
    int m1 = 2;
    int m2 = 4;

    cout << findPages(nums1 , m1) << endl;
    cout << findPages(nums2 , m2);
    
    return 0;
}