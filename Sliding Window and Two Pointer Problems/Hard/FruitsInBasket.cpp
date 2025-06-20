/*
There is only one row of fruit trees on the farm, oriented left to right. An integer array called fruits represents the trees, where fruits[i] denotes the kind of fruit produced by the ith tree.
The goal is to gather as much fruit as possible, adhering to the owner's stringent rules:
1) There are two baskets available, and each basket can only contain one kind of fruit. The quantity of fruit each basket can contain is unlimited.
2) Start at any tree, but as you proceed to the right, select exactly one fruit from each tree, including the starting tree. One of the baskets must hold the harvested fruits.
3) Once reaching a tree with fruit that cannot fit into any basket, stop.

Return the maximum number of fruits that can be picked.
*/


// Brute force approach
/*

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

int maximumfruitsInBasket(vector<int>&arr){

    int maxFruits = 0;
    
    for(int i=0;i<arr.size();i++){

        unordered_map<int , int>mpp;

        for(int j=i;j<arr.size();j++){

            mpp[arr[j]]++;

            if(mpp.size() > 2){
                break;
            }

            maxFruits = max(maxFruits , j - i + 1);
        }
    }
    return maxFruits;
}

int main(){
    vector<int>arr = {1,2,3,2,2};
    cout << maximumfruitsInBasket(arr);
    return 0;
}

*/


// better approach
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

int maximumfruitsInBasket(vector<int>&arr){

    int maxFruits = 0;
    unordered_map<int , int>mpp;
    int l = 0 , r = 0;

    while(r < arr.size()){
        mpp[arr[r]]++;

        while(mpp.size() > 2){
            mpp[arr[l]]--;
            if(mpp[arr[l]] == 0){
                mpp.erase(arr[l]);
            }

            l++;
        }

        maxFruits = max(maxFruits , r-l+1);
        r++;
    }
    return maxFruits;
}

int main(){
    vector<int>arr = {1,2,3,2,2};
    cout << maximumfruitsInBasket(arr);
    return 0;
}