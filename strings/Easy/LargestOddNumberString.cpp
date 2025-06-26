/*
You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists.

A substring is a contiguous sequence of characters within a string.

*/

// Brute force
/*

#include<iostream>
#include<string>
using namespace std;

string largestOddNumber(string s){
    string str = "";
    string ans = "";

    int i = 0;
    while(i < s.length()){
        str = str + s[i];

        if((s[i] - '0') % 2 != 0){
            ans = str;
        }
    }
    return ans;
}

*/

// Optimal approach
#include<iostream>
#include<string>
using namespace std;

string longestOddNumber(string s){
    int i = s.length() - 1;

    while(i >= 0){
        if((s[i] - '0') % 2 != 0){
            return s.substr(0 , i+1);
        }
        i--;
    }
    return "";
}

int main(){
    string s = "34501";
    cout << longestOddNumber(s);
    return 0;
}