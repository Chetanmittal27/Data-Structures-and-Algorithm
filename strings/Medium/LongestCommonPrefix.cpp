/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
*/

// Brute force approach
/*

#include<iostream>
#include<vector>
#include<string>

using namespace std;

string commonLongestPrefix(vector<string>&strs){

    string str = "";

    for(int i=0;i<strs[0].length();i++){

        char ch = strs[0][i];

        for(int j=1;j<strs.size();j++){

            if(strs[j][i] != ch){
                return str;
            }
        }
        str = str + strs[0][i];
    }
    return str;
}

int main(){
    vector<string>strs = {"flower" , "flow" , "flight"};
    cout << commonLongestPrefix(strs);
    return 0;
}

*/

// Optimal approach
#include<iostream>
#include<vector>
#include<string>

using namespace std;

string commonLongestPrefix(vector<string>&strs){

    string str = "";
    sort(strs.begin() , strs.end());

    for(int i=0;i<strs[0].length();i++){

        char ch = strs[0][i];

        if(strs[strs.size() - 1][i] == ch){
            str = str + ch;
        }
        else{
            break;
        }
    }
    return str;
}

int main(){
    vector<string>strs = {"flower" , "flow" , "flight"};
    cout << commonLongestPrefix(strs);
    return 0;
}