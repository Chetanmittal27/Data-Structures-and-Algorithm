/*
Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

*/

// Better Approach
#include<iostream>
#include<string>
using namespace std;

string reversewords(string s){

    string result = "";
    int n = s.length;

    int i = 0;
    while(i < n){

        while(i < n && s[i] == ' '){
            i++;
        }

        if(i >= n) break;

        int j = i + 1;

        while(j < n && s[j] != ' '){
            j++;
        }

        string w = s.substr(i , j - i);

        if(result.empty()){
            result = w;
        }

        else{
            result = w + " " + result;
        }

        i = j + 1;
    }
    return result;
}

int main() {
    string s = "  the sky is   blue ";
    cout << reversewords(s);
    return 0;
}