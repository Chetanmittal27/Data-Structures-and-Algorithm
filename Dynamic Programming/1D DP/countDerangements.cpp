/*
A Derangement is a permutation of ‘N’ elements, such that no element appears in its original position. For example, an instance of derangement of {0, 1, 2, 3} is {2, 3, 1, 0}, because 2 present at index 0 is not at its initial position which is 2 and similarly for other elements of the sequence.

Given a number ‘N’, find the total number of derangements possible of a set of 'N’ elements.

Note:
The answer could be very large, output answer %(10 ^ 9 + 7).
*/


// Approach-1 (Recursive)
/*
#include<iostream>
using namespace std;

int solve(int n){

    if(n == 1){
        return 0;
    }

    if(n == 2){
        return 1;
    }


    int ans = (n-1) * (solve(n-1) + solve(n-2));
    return ans;
}


int countDerangements(int n){

    return solve(n);
}


int main(){
    int n;
    cin >> n;

    cout << countDerangements(n);
    return 0;
}

*/


// Approach-2 (Top - Down Approach)
/*
#include<iostream>
#include<vector>

using namespace std;

int solve(int n , vector<int> &dp){

    if(n == 1){
        return 0;
    }

    if(n == 2){
        return 1;
    }


    if(dp[n] != -1){
        return dp[n];
    }


    dp[n] = (n-1) * (solve(n-1 , dp) + solve(n-2 , dp));
    return dp[n];
}


int countDerangements(int n){

    vector<int>dp(n+1 , -1);
    return solve(n , dp);
}

int main(){
    int n;
    cin >> n;

    cout << countDerangements(n);
    return 0;
}
*/



// Approach-3 (Bottom-Up Approach)
long long int countDerangements(int n) {
    // Write your code here.

    vector<long long int> dp(n+1 , 0);
    
    dp[1] = 0;
    dp[2] = 1;

    for(int i=3;i<=n;i++){
        dp[i] = (i-1) * (dp[i-2] + dp[i-1]);
    }

    return dp[n];
}



// Approach-4 (Space optimization)
long long int countDerangements(int n) {
    // Write your code here.

    if(n == 1) return 0;
    if(n == 2) return 1;

    
    long long int prev2 = 0;
    long long int prev1 = 1;

    for(int i=3;i<=n;i++){
        long long int current = (i-1) * (prev2 + prev1);
        prev2 = prev1;
        prev1 = current;
    }

    return prev1;
}