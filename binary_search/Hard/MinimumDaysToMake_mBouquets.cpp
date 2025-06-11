/*
You are given an integer array bloomDay, an integer m and an integer k.

You want to make m bouquets. To make a bouquet, you need to use k adjacent flowers from the garden.

The garden consists of n flowers, the ith flower will bloom in the bloomDay[i] and then can be used in exactly one bouquet.

Return the minimum number of days you need to wait to be able to make m bouquets from the garden. If it is impossible to make m bouquets return -1.

*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int NumberOfBloomedFlowers(vector<int>&BloomDay , int mid , int m , int k){
    int flowers = 0;
    int bouquets = 0;

    for(int i=0;i<BloomDay.size();i++){
        if(BloomDay[i] <= mid){
            flowers++;

            if(flowers == k){
                bouquets++;
                flowers = 0;
            }
        }
        else{
            flowers = 0;
        }
    }

    return bouquets;
}


int minDays(vector<int>&BloomDay , int m , int k){
    int n = BloomDay.size();
    int large = *max_element(BloomDay.begin() , BloomDay.end());

    int low = 1;
    int high = large;
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(NumberOfBloomedFlowers(BloomDay , mid , m , k) == m){
            ans = mid;
            high = mid - 1;
        }

        else if(NumberOfBloomedFlowers(BloomDay , mid , m , k) > m){
            ans = mid;
            high = mid - 1;
        }

        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int>BloomDay = {7,7,7,7,12,7,7};
    int m = 2;
    int k = 3;

    cout << minDays(BloomDay , m , k);
    return 0;
}