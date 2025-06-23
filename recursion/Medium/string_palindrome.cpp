/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.
*/

#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string s){
    string str = "";

    for(char c : s){
        if(isalnum(c)){
            str.push_back(tolower(c));
        }
    }

    int n = str.size();

    for(int i=0;i<n;i++){
        if(str[i] != str[n-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s);
    return 0;
}

// Optimal approach
class Solution {
public:

    bool helper(string& str , int i){
        int n = str.size();
        if(i >= n/2){
            return true;
        }

        if(str[i] != str[n-i-1]){
            return false;
        }

        return helper(str , i+1);
    }

    bool isPalindrome(string s) {
        string str = "";
        for(char c : s){
            if(isalnum(c)){
                str.push_back(tolower(c));
            }
        }

        int i = 0;
        return helper(str , i);
    }
};