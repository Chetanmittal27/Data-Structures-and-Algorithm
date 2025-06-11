// method 1
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

bool checkPalindrome(string s)
{
    string str;
    for(char i=0;i<s.length();i++){
        if ((s[i]>='A'  && s[i]<='Z') || (s[i] >='0'  && s[i]<='9') || (s[i]>= 'a'  && s[i]<= 'z')){
            str.push_back(tolower(s[i]));
        }
    }
    int st = 0;
    int e = str.length() - 1;

    while (st < e){
        if (str[st] != str[e]){
            return false;
        }
        st++;
        e--;
    }
    return true;
}


int main(){
    string s;



    cout<<checkPalindrome("N2 i&nJA?a& pnI2n");
    return 0;

}


// method 2
#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
    string str;
    for (char i : s){
        if (isalnum(i)){
            str.push_back(tolower(i));
        }
    }

    int st = 0;
    int e = str.length() - 1;
    while (st < e){
        if (str[st] != str[e]){
            return false;
        }
        st++;
        e--;
    }
    
    return true;
}