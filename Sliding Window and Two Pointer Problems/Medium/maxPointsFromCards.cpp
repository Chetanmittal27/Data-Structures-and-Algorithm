/*
There are several cards arranged in a row, and each card has an associated number of points. The points are given in the integer array cardPoints.

In one step, you can take one card from the beginning or from the end of the row. You have to take exactly k cards.

Your score is the sum of the points of the cards you have taken.

Given the integer array cardPoints and the integer k, return the maximum score you can obtain.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxPointsObtained(vector<int>&cardPoints , int k){
    int n = cardPoints.size();
    int lsum = 0;
    int rsum = 0;
    int maxSum = 0;

    for(int i=0;i<=k-1;i++){
        lsum = lsum + cardPoints[i];
    }
    maxSum = lsum;

    int rightIndex = n - 1;
    for(int i=k-1;i>=0;i--){
        lsum = lsum - cardPoints[i];
        rsum = rsum + cardPoints[rightIndex];
        rightIndex--;

        maxSum = max(maxSum , lsum + rsum);
    }
    return maxSum;
}

int main(){
    vector<int>cardPoints = {6,2,3,4,7,2,1,7,1};
    int k = 4;
    cout << maxPointsObtained(cardPoints , k);
    return 0;
}