/*
A conveyor belt has packages that must be shipped from one port to another within days days.

The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.

Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.
*/


#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int DaysRequired(vector<int>&weights , int w){
    int day = 0;
    int sum = 0;

    for(int i=0;i<weights.size();i++){
        sum = sum + weights[i];
        if(sum > w){
            day++;
            sum = 0;
            i = i - 1;
        }
    }

    day++;
    return day;
}

int shipWithinDays(vector<int>&weights , int days){
    int low = *max_element(weights.begin() , weights.end());
    int high = accumulate(weights.begin() , weights.end() , 0);
    int result = -1;

    while(low <= high){
        int mid = (low + high) / 2;

        if(DaysRequired(weights , mid) <= days){
            result = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return result;
}

int main(){
    vector<int>weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;

    cout << shipWithinDays(weights , days) << endl;
    return 0;
}