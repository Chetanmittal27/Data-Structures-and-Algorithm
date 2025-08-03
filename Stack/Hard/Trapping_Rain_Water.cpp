/*
Given an array arr[] with non-negative integers representing the height of blocks. If the width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 
*/

// Brute Force

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxWater (vector<int> &arr){

    int i = 0;
    int sum = 0;

    while(i < arr.size()){

        if(i == 0 || i == arr.size() - 1){
            sum = sum + 0;
        }

        else{

            int maxLeft = *max_element(arr.begin() , arr.begin() + i);

            int maxRight = *max_element(arr.begin() + i + 1 , arr.end());

            int mini = min(maxLeft , maxRight);

            if(arr[i] < mini){
                sum = sum + (mini - arr[i]);
            }

            else{
                sum = sum + 0;
            }
        }

        i++;
    }

    return sum;
}

int main(){
    vector<int>arr = {3, 0, 1, 0, 4, 0, 2};

    cout << maxWater(arr);
    return 0;
}