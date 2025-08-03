/*
Given two strings s1 and s2, return the length of their longest common subsequence (LCS). If there is no common subsequence, return 0.

A subsequence is a sequence that can be derived from the given string by deleting some or no elements without changing the order of the remaining elements. For example, "ABE" is a subsequence of "ABCDE".
*/


// Approach-1 (Recursion)
/*

#include<iostream>
#include<string>

using namespace std;

int solve(string &s1 , string &s2 , int i , int j){
    
    if(i >= s1.length() || j >= s2.length()){
        return 0;
    }


    if(s1[i] == s2[j]){
        return 1 + solve(s1 , s2 , i+1 , j+1);
    }


    return max(solve(s1 , s2 , i+1 , j) , solve(s1 , s2 , i , j+1));
}


int lcs(string &s1 , string &s2){

    int i = 0 , j = 0;
    return solve(s1 , s2 , i , j);
}


int main(){
    string s1 = "abcde";
    string s2 = "ace";

    cout << lcs(s1 , s2);
    return 0;
}

*/


// Approach-2 (Top-Down Approach)

#include<iostream>
#include<vector>
using namespace std;

int solve(string &s1 , string &s2 , int i , int j , vector<vector<int>> &dp){

    if(i >= s1.length() || j >= s2.length()){
        return 0;
    }


    if(dp[i][j] != -1){
        return dp[i][j];
    }


    if(s1[i] == s2[j]){
        return 1 + solve(s1 , s2 , i+1 , j+1 , dp);
    }


    return max(solve(s1 , s2 , i+1 , j , dp) , solve(s1 , s2 , i , j+1 , dp));
}


int lcs(string &s1 , string &s2){

    int i = 0 , j = 0;
    vector<vector<int>>dp(s1.length() , vector<int>(s2.length() , -1));
    return solve(s1 , s2 , i , j , dp);
}


int main(){
    string s1 = "abcde";
    string s2 = "ace";

    cout << lcs(s1 ,s2);
    return 0;
}