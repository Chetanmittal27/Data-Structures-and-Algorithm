/*
Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.
*/

// Brute Force Approach
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool checkRotated(string s , string goal){

    for(int i=0;i<s.size();i++){

        for(int j=1;j<s.size();j++){

            swap(s[j] , s[j-1]);

        }

        if(s == goal){
            return true;
        }
    }
    return false;
}

int main(){
    string s = "abcde";
    string goal = "abdec";

    cout << checkRotated(s , goal);
    return 0;
}

// Better approach
class Solution {
public:
    bool rotateString(string s, string goal) {
        
        string str = s + s;
        int m = s.length();
        int n = goal.length();

        if(m != n) return false;

        else{
            if(str.find(goal) != string::npos){
                return true;
            }
        }
        return false;
    }
};