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


// Optimal approach
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int numberofSubstrings(string s){

    vector<int>hash(3 , -1);
    int n = s.size();
    int number = 0;

    for(int i=0;i<n;i++){

        hash[s[i] - 'a'] = i;

        if(hash[0] != -1 && hash[1] != -1 && hash[2] != -1){

            int minPossibleIndex = *min_element(hash.begin() , hash.end());

            number = number + (minPossibleIndex + 1);
        }
    }
    return number;
}

int main(){
    string s = "abcabc";
    cout << numberofSubstrings(s);
    return 0;
}