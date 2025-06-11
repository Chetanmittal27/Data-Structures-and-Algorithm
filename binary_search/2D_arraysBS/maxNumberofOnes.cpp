/*
Given a non-empty grid mat consisting of only 0s and 1s, where all the rows are sorted in ascending order, find the index of the row with the maximum number of ones.

If two rows have the same number of ones, consider the one with a smaller index. If no 1 exists in the matrix, return -1.
*/

// Brute force : O(n^2)

// Optimal appoach 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maximumNumber_ofOnes(vector<vector<int>>mat){
    int rows = mat.size();
    int cols = mat[0].size();

    int index = -1;
    int maxOnes = 0;
    for(int i=0;i<rows;i++){
        int start = -1;

        int low = 0;
        int high = cols - 1;
        while(low <= high){
            int mid = low + (high - low) / 2;

            if(mat[i][mid] == 1){
                start = mid;
                high = mid - 1;
            }

            else{
                low = mid + 1;
            }
        }

        if(start > -1){
            int count = cols - start;
            if(count > maxOnes){
                maxOnes = count;
                index = i;
            }
        }
    }
    return index;
}


int main(){
    vector<vector<int>>mat = {
        {0,1,1,1},
        {0,0,0,1},
        {0,0,0,0},
        {0,1,1,1}
    };

    cout << maximumNumber_ofOnes(mat);
    return 0;
}