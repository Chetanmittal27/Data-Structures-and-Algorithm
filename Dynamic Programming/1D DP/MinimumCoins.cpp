/*
You are given an array of 'N' distinct integers and an integer 'X' representing the target sum. You have to tell the minimum number of elements you have to take to reach the target sum 'X'.  You have an infinite number of elements of each type.
*/


// Approach-1 (Recursion)
// Time Complexity: O(2^n) 
// Space Complexity: O(n)

/*
#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int solve(vector<int> &coins , int X){

    // Base case
    if(X == 0){
        return 0;
    }

    if(X < 0){
        return INT_MAX;
    }


    int mini = INT_MAX;

    for(int coin : coins){

        int ans = solve(coins , X-coin);

        if(ans != INT_MAX){
            mini = min(mini , ans+1);
        }
    }

    return mini;
}


int minCoins(vector<int> &coins , int X){

    int ans = solve(coins , X);

    if(ans == INT_MAX){
        return -1;
    }

    return ans;
}


int main(){
    vector<int>coins = {1,2,3};
    int X = 7;

    cout << minCoins(coins , X);
    return 0;
}
*/


// Approach-2 (Top - Down Approach)
/*
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int solve(vector<int>& coins , int x , vector<int>& dp){

    if(x == 0) return 0;
    if(x < 0) return INT_MAX;

    int mini = INT_MAX;

    if(dp[x] != -1){
        return dp[x];
    }

    for(auto coin : coins){
        int ans = solve(coins , x - coin , dp);

        if(ans != INT_MAX){
            mini = min(mini , 1+ans);
        }
    }

    dp[x] = mini;

    return dp[x];
}


int minCoins(vector<int>& coins , int x){
    vector<int>dp(x+1 , -1);

    int ans = solve(coins , x , dp);

    if(ans == INT_MAX){
        return -1;
    }

    else{
        return ans;
    }
}



int main(){
    vector<int>coins = {1,2,5};
    int x = 11;

    cout << minCoins(coins , x);
    return 0;
}

*/



// Approach-3 (Bottom - Up Approach)
// Time Complexity: O(x*n)
// Space Complexity: O(n)

/*
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int minCoins(vector<int>& coins , int x){
    vector<int>dp(x+1 , INT_MAX);

    dp[0] = 0;
    
    for(int i=1;i<=x;i++){

        for(int j=0;j<coins.size();i++){

            if(i - coins[j] >= 0  &&  dp[i-coins[j]] != INT_MAX){

                dp[i] = min(dp[i] , 1 + dp[i-coins[j]]);
            }
        }
    }


    if(dp[x] == INT_MAX){
        return -1;
    }

    return dp[x];
}



int main(){
    vector<int>coins = {1,2,5};
    int x = 11;

    cout << minCoins(coins , x);
    return 0;
}

*/