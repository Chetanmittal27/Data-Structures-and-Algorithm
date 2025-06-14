// Number of Substrings Containing All Three Characters

// Brute Force
/*

#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int numberOfSubstrings(string s){

    int n = s.size();
    
    int number = 0;

    for(int i=0;i<n;i++){

        unordered_map<char , int>mpp;

        for(int j=i;j<n;j++){
            
            mpp[s[j]]++;

            if(mpp.size() == 3){
                number = number + (n - j);
                break;
            }
        }
    }
    return number;
}

int main(){
    string s = "abcabc";
    cout << numberOfSubstrings(s);
    return 0;
}
    
*/