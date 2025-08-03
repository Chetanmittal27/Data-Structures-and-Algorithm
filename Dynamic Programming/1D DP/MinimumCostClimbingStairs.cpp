/*
You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.
You can either start from the step with index 0, or the step with index 1.
Return the minimum cost to reach the top of the floor.
*/


// Approach-1 (Recursion)
/*
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solve(vector<int> &cost , int n){

    if(n == 0) return cost[0];
    if(n == 1) return cost[1];


    return cost[n] + min(solve(cost , n-1) , solve(cost , n-2));
}


int minCostClimbingStairs(vector<int> &cost){

    int n = cost.size();

    return min(solve(cost , n-1) , solve(cost , n-2));
}


int main(){
    vector<int>cost = {10,15,20};
    cout << minCostClimbingStairs(cost);
    return 0;
}
*/


// Approach-2 (Top-Down Approach)
/*
#include<iostream>
#include<vector>

using namespace std;

int solve(vector<int> &cost , int n , vector<int> &dp){

    if(n == 0) return cost[0];
    if(n == 1) return cost[1];


    if(dp[n] != -1){
        return dp[n];
    }


    dp[n] = cost[n] + min(solve(cost , n-1 , dp) , solve(cost , n-2 , dp));
    return dp[n];
}

int minCostClimbingStairs(vector<int> &cost){

    int n = cost.size();
    vector<int>dp(n+1 , -1);

    return min(solve(cost , n-1 , dp) , solve(cost , n-2 , dp));
}
*/


// Approach-3 (Bottom-Up Approach)
/*
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int minCostClimbingStairs(vector<int> &cost){

    int n = cost.size();
    vector<int>dp(n+1);

    dp[0] = cost[0];
    dp[1] = cost[1];

    for(int i=2;i<n;i++){
        dp[i] = cost[i] + min(dp[i-1] , dp[i-2]);
    }

    dp[n] = min(dp[n-1] , dp[n-2]);
    return dp[n];
}

*/


// Approach-4 (Space Optimization)
#include<iostream>
using namespace std;

int minCostClimbingStairs(vector<int> &cost){

    int n = cost.size();

    int prev2 = cost[0];
    int prev1 = cost[1];

    for(int i=2;i<n;i++){
        int current = cost[i] + min(prev2 , prev1);
        prev2 = prev1;
        prev1 = current;
    }

    return min(prev1 , prev2);
}