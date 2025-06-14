/*
Given a string s and an integer k.Find the length of the longest substring with at most k distinct characters.
*/
// Brute force
/*

#include<iostream>
#include<string>
using namespace std;

int longest_substring(string s , int k){

    int maxLength = 0;

    for(int i=0;i<s.size();i++){

        string str;
        int count = 0;

        for(int j=i;j<s.size();j++){

            if(str.find(s[j]) == string::npos){
                str.push_back(s[j]);
                count++;
            }

            if(count > k){
                break;
            }

            else{
                maxLength = max(maxLength , j-i+1);
            }
        }
        return maxLength;
    }
}

*/

// Better appraoch
#include<iostream>
#include<string>
#include<map>
using namespace std;

int longest_substring(string s , int k){

    int maxLength = 0;

    int l = 0 , r = 0;
    map<char , int>mpp;
    int count = 0;

    while(r < s.size()){
        mpp[s[r]]++;

        while(mpp.size() > k){
            mpp[s[l]]--;
            if(mpp[s[l]] == 0){
                mpp.erase(s[l]);
            }
            l++;
        }

        if(mpp.size() <= k){
            maxLength = max(maxLength , r-l+1);
            r++;
        }
    }
    return maxLength;
}

int main(){
    string s = "aababbcaacc";
    int k = 2;

    cout << longest_substring(s, k);
    return 0;
}

// If in above ques i replace inner while loop from if then it would be the optimal case