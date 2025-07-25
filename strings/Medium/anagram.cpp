
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool checkAnagram(string& s1 , string& s2){

    if(s1.length() != s2.length()){
        return false;
    }

    sort(s1.begin() , s1.end());
    sort(s2.begin() , s2.end());

    return s1 == s2;
}


int main(){
    string s1 = "ABCD";
    string s2 = "BCAD";

    cout << checkAnagram(s1 , s2);
    return 0;
}