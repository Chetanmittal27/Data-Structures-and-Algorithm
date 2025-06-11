/*
Given a string s, find the length of the longest substring without duplicate characters.
*/

// Brute Force approach
// Time Complexity : O(n^2)
// Space Complexity : O(n)
/* 

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int lengthofLongestSubstring(string s){

    int len = 0;

    for(int i=0;i<s.size();i++){
        
        string str = "";
        int count = 0;

        for(int j=i;j<s.size();j++){

            if(str.empty() || str.find(s[j]) == string::npos){
                str.push_back(s[j]);
                count++;
            }

            else{
                len = max(len , count);
                break;
            }
        }

        len = max(len , count);
    }
    return len;
}

int main(){
    string s = "abcabcbb";
    cout << lengthofLongestSubstring(s);
    return 0;
}

*/

// Better approach
// Time Complexity : O(n)
// Space Complexity : O(n)

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int lengthOfLongestSubstring(string s){
    int l = 0;
    int r = 0;
    
    int len = 0;

    string str = "";

    while(r < s.size()){
        if(str.empty() || str.find(s[r]) == string::npos){
            str.push_back(s[r]);
            len = max(len , r-l+1);
            r++;
        }

        else{
            while(str.find(s[r]) != string::npos){
                str.erase(0 , 1);
                l++;
            }
        }
    }
    return len;
}

int main(){
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s);
    return 0;
}