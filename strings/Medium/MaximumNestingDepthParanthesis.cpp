/*
Given a valid parentheses string s, return the nesting depth of s. The nesting depth is the maximum number of nested parentheses.
*/

#include<iostream>
#include<string>

using namespace std;

int maxDepth(string s){

    int count = 0;
    int maxi = 0;

    int n = s.size();

    for(int i=0;i<n;i++){

        if(s[i] == '('){
            count++;
            maxi = max(maxi , count);
        }

        if(s[i] == ')'){
            count--;
        }
    }

    return maxi;
}


int main(){
    string s = "(1+(2*3)+((8)/4))+1";

    cout << maxDepth(s);
    return 0;
}