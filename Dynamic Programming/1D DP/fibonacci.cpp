// ==> ( Brute Force approach )
/*
#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n <= 1){
        return n;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
    cin >> n;

    cout << fibonacci(n);
    return 0;
}
*/

//  ==> ( Top-Down DP Approach )
// Time Complexity: O(n)
// Space Complexity: O(n)

/*
#include<iostream>
#include<vector>
using namespace std;

int nth_fibonacci_number(int n , vector<int> &dp){

    if(n <= 1){
        return n;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    dp[n] = nth_fibonacci_number(n-1 , dp) + nth_fibonacci_number(n-2 , dp);
    return dp[n];

}

int main(){
    int n;
    cin >> n;

    vector<int>dp(n+1);

    for(int i=0;i<n+1;i++){
        dp[i] = -1;
    }

    cout << "The nth fibonacci number is : " << nth_fibonacci_number(n , dp);
    return 0;
}
*/


// ==> ( Bottom Up Approach - Tabulation Form)
// Time Complexity: O(n)
// Space Complexity: O(n)

/*
#include<iostream>
#include<vector>
using namespace std;

int fibonacci(int n , vector<int> &dp){

    dp[0] = 0;
    dp[1] = 1;

    for(int i = 2; i <= n; i++){

        dp[i] = dp[i-1] + dp[i-2];

    }

    return dp[n];
}

int main(){
    int n;
    cin >> n;

    vector<int>dp(n+1);

    cout << fibonacci(n , dp);
    return 0;
}
*/



// ==> (Approach-4 => Space Optimization)
#include<iostream>
using namespace std;

int fibonacci(int n){

    int prev1 = 1;
    int prev2 = 0;

    if(n <= 1){
        return n;
    }

    for(int i = 2; i <= n; i++){

        int current = prev2 + prev1;
        prev2 = prev1;
        prev1 = current;

    }

    return prev1;
}

int main(){
    int n;
    cin >> n;

    cout << fibonacci(n);
    return 0;
}