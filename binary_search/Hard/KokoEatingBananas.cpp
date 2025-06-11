/*
Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long hoursCheck(vector<int>&piles , int b){
    long long total_hours = 0;
    for(int i=0;i<piles.size();i++){
        total_hours = total_hours + (piles[i] + b - 1) / b;
    }
    return total_hours;
}
int minEatingSpeed(vector<int>&piles , int h){
    int low = 1;
    int high = *max_element(piles.begin() , piles.end());
    int ans = -1;

    while(low <= high){
        int mid = (low + high) / 2;

        if(hoursCheck(piles , mid) == h){
            ans = mid;
            high = mid - 1;
        }

        else if(hoursCheck(piles , mid) > h){
            low = mid + 1;
        }

        else{
            ans = mid;
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int>piles = {30,11,23,4,20};
    int h = 5;

    cout << minEatingSpeed(piles , h);
    return 0;
}