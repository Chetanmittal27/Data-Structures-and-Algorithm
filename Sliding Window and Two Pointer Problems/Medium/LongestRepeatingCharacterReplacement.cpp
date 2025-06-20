/*
You are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most k times.
Return the length of the longest substring containing the same letter you can get after performing the above operations.
*/

// Brute Force
/*

#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<algorithm>

using namespace std;

int characterReplacement(string s , int k){

    int maxLength = INT_MIN;

    for(int i=0;i<s.size();i++){

        vector<int>hash(26 , 0);
        int maxFreq = 0;

        for(int j=i;j<s.size();j++){

            hash[s[j]]++;
            maxFreq = max(maxFreq , hash[s[j]]);

            int changes = (j-i+1) - maxFreq;

            if(changes <= k){
                maxLength = max(maxLength , j-i+1);
            }

            else{
                break;
            }
        }
    }
    return maxLength;
}

*/

// Better Approach
class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int n = s.size();
        int maxLength = INT_MIN;

        int l = 0 , r = 0;
        int hash[26] = {0};
        int maxFreq = 0;

        while(r < n){

            hash[s[r] - 'A']++;

            maxFreq = max(maxFreq , hash[s[r] - 'A']);

            while((r-l+1) - maxFreq > k){
                hash[s[l] - 'A']--;
                l++;
            }

            if((r-l+1) - maxFreq <= k){
                maxLength = max(maxLength , r-l+1);
                r++;
            }
        }
        return maxLength;
    }
};