/*you are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*/

// Brute force approach
/*
#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>&prices){

    int profit = 0;
    for(int i=0;i<prices.size();i++){
        int diff;
        for(int j=i+1;j<prices.size();j++){
            diff = prices[j] - prices[i];
            if(diff > profit){
                profit = diff;
            }
        }
    }
    return profit;
}

int main(){
    vector<int>prices = {7,1,5,3,6,4};
    cout << maxProfit(prices);
    return 0;
}
*/

// Optimal Approach
#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>&prices){
    int profit = 0;
    int bestBuy = prices[0];
    for(int i=1;i<prices.size();i++){
        if(prices[i] > bestBuy){
            profit = max(profit , prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy , prices[i]);
    }
    return profit;
}

int main(){
    vector<int>prices = {7,1,5,3,6,4};
    cout << maxProfit(prices);
    return 0;
}