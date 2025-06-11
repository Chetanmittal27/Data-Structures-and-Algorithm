/*
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.
*/

// Brute force : O(n^2)

// Optimal approach

#include<iostream>
#include<vector>
using namespace std;

bool search_2dMatrix(vector<vector<int>>matrix , int target){

    int rows = matrix.size();
    int cols = matrix[0].size();
    int row = -1;

    int low = 0;
    int high = rows - 1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(matrix[mid][cols-1] >= target && matrix[mid][0] <= target){
            row = mid;
            break;
        }

        else if(matrix[mid][cols-1] > target){
            high = mid - 1;
        }

        else{
            low = mid + 1;
        }
    }


    if(row == -1) return false;
    int start = 0;
    int end = cols - 1;

    while(start <= end){
        int mid2 = start + (end - start) / 2;

        if(matrix[row][mid2] == target){
            return true;
        }

        else if(matrix[row][mid2] > target){
            high = mid2 - 1;
        }

        else{
            low = mid2 + 1;
        }
    }
    return false;
}