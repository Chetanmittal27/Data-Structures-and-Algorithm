/*
You are given an integer ‘N’ denoting the length of the rod. You need to determine the maximum number of segments you can make of this rod provided that each segment should be of the length 'X', 'Y', or 'Z'.
*/

// Approach-1 (Recursion)
// Time Complexity: O(2^n)
// Space Complexity: O(n)

/*
#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;


int solve(int n , int x , int y , int z){

    if(n == 0) return 0;
    if(n < 0) return INT_MIN;

    int a = solve(n-x , x , y , z) + 1;
    int b = solve(n-y , x , y , z) + 1;
    int c = solve(n-z , x , y , z) + 1;

    return max(a , max(b , c));
}


int cutSegments(int n , int x , int y , int z){

    int ans = solve(n , x , y , z);

    if(ans < 0){
        return 0;
    }

    else{
        return ans;
    }
}


int main(){
    int n = 7;
    int x = 5;
    int y = 2;
    int z = 2;

    cout << cutSegments(n , x , y , z);
    return 0;
}
*/

// Approach-2 (Top-Down Approach)
/*
#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>

using namespace std;


int solve(int n , int x , int y , int z , vector<int> &dp){

    if(n == 0) return 0;
    if(n < 0) return INT_MIN;

    if(dp[n] != -1){
        return dp[n];
    }

    int a = solve(n-x , x , y , z , dp) + 1;
    int b = solve(n-y , x , y , z , dp) + 1;
    int c = solve(n-z , x , y , z , dp) + 1;

    dp[n] = max(a , max(b , c));
    return dp[n];
}


int cutSegments(int n , int x , int y , int z){

    vector<int>dp(n+1 , -1);

    int ans = solve(n , x , y , z , dp);

    if(ans < 0){
        return 0;
    }

    else{
        return ans;
    }
}


int main(){
    int n = 7;
    int x = 5;
    int y = 2;
    int z = 2;

    cout << cutSegments(n , x , y , z);
    return 0;
}

*/


// Approach-3 (Bottom-up Approach)

#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>

using namespace std;

int cutSegments(int N , int x , int y , int z){

    if(N < 0) return INT_MIN;

    vector<int>dp(N+1 , INT_MIN);

    dp[0] = 0;

    for(int i=1;i<=N;i++){

        if(i - x >= 0){
            dp[i] = max(dp[i-x] + 1 , dp[i]);
        }

        if(i-y >= 0){
            dp[i] = max(dp[i-y] + 1 , dp[i]);
        }

        if(i-z >= 0){
            dp[i] = max(dp[i-z] + 1 , dp[i]);
        }
    }

    if(dp[n] < 0){
        return 0;
    }

    else{
        return dp[n];
    }
}


int main(){
    int N = 8;
    int x = 1;
    int y = 4;
    int z = 3;

    cout << cutSegments(N , x , y , z);
    return 0;
}