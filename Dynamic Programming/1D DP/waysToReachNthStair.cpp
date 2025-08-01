/*
You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair.
Each time, you can climb either one step or two steps.
You are supposed to return the number of distinct ways you can climb from the 0th step to the Nth step.
*/

// Approach-1 (Recursive)

/*
#include<iostream>
using namespace std;

int solve(int stairs){
    
    if(stairs <= 1){
        return 1;
    }


    return solve(stairs - 1) + solve(stairs - 2);
}


int countDistinctWays(int stairs){

    return solve(stairs);
}

int main(){

    int stairs;
    cin >> stairs;

    cout << countDistinctWays(stairs);
    return 0;
}
*/


// Approach-2 (Top - Down Approach)
/*
#include<iostream>
#include<vector>

using namespace std;


int solve(int stairs , vector<int> &dp){

    if(stairs == 0  ||  stairs == 1){
        return 1;
    }

    
    if(dp[stairs] != -1){
        return dp[stairs];
    }


    dp[stairs] = solve(stairs-1 , dp) + solve(stairs - 2 , dp);
    return dp[stairs];
}


int countDistinctWays(int stairs){

    vector<int>dp(stairs+1 , -1);

    return solve(stairs , dp);
}


int main(){
    int stairs;
    cin >> stairs;

    cout << countDistinctWays(stairs);
    return 0;
}

*/


// Approach-3 (Bottom-Up Approach)
/*
#include<iostream>
#include<vector>

using namespace std;

int countDistinctWays(int n){

    vector<int>dp(n+1);

    dp[0] = 1;
    dp[1] = 1;

    for(int i=2;i<=n;i++){

        dp[i] = dp[i-1] + dp[i-2]; 
    }

    return dp[n];
}

*/


// Approach-4 (Space Optimization)

#include<iostream>
using namespace std;

int countDistinctWays(int n){

    int prev1 = 1;
    int prev2 = 1;

    for(int i=2;i<=n;i++){
        int current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return prev1;
}