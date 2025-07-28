/*
Given an array arr[], find the first repeating element. The element should occur more than once and the index of its first occurrence should be the smallest.

Note:- The position you return should be according to 1-based indexing. 
*/


#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>

using namespace std;

int firstRepeating(vector<int> &arr){

    unordered_map<int , pair<int , int>>mpp;

    for(int i=0;i<arr.size();i++){

        if(mpp.find(arr[i]) == mpp.end()){
            mpp[arr[i]] = {1 , i};
        }

        else{
            mpp[arr[i]].first++;
        }
    }


    int index = INT_MAX;
    for(const auto& it : mpp){
        
        pair<int , int>val = it.second;

        if(val.first > 1){
            index = min(index , val.second);
        }
    }


    return index == INT_MAX ? -1 : index+1;
}

int main(){
    vector<int>arr = {1, 5, 3, 4, 3, 5, 6};
    cout << firstRepeating(arr);
    return 0;
}