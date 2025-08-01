/*
Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

Return the sorted string. If there are multiple answers, return any of them.

*/


#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include<algorithm>

using namespace std;

string frequencySort(string s){

    unordered_map<char , int>mpp;

    for(auto ch : s){
        mpp[ch]++;
    }

    vector<pair<char , int>> sortedFreq(mpp.begin() , mpp.end());

    sort(sortedFreq.begin() , sortedFreq.end() , [](auto &a , auto &b){
        return a.second > b.second;
    });

    string str = "";
    for(auto &p : sortedFreq){

        char ch = p.first;
        int count = p.second;
        str.append(count , ch);
    }

    return str;
}


int main(){
    string s = "cccaaa";
    string result = frequencySort(s);

    for(auto it : result){
        cout << it;
    }
    return 0;
}