#include<iostream>
#include<string>

using namespace std;

bool stringPalindrome(string str){
    int s = 0;
    int e = str.length() - 1;

    while (s < e){
        if (str[s] != str[e]){
            return false;
        }

        s++;
        e--;
    }

    return true;
}


int main(){
    string str;
    cin >> str;

    if (stringPalindrome(str)){
        cout<<" It is a palindrome";
    }

    else{
        cout<<"It is not a palindrome";
    }

    return 0;
}