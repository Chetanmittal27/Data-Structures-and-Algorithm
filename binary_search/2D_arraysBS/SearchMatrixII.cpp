/*
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
*/

// Brute force : O(n^2)
// Better Approach : O(n * logm)

// Optimal appraoch
#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>matrix , int target){

    int m = matrix.size();
    int n = matrix[0].size();

    int row = 0;
    int col = n - 1;

    while(row < m && col >= 0){
        if(matrix[row][col] == target){
            return true;
        }

        else if(matrix[row][col] > target){
            col--;
        }

        else{
            row++;
        }
    }
    return false;
}

int main(){
    vector<vector<int>>matrix = {
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
    };

    cout << searchMatrix(matrix , 14);
    return 0;
}