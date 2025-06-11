#include<iostream>
#include<string>
using namespace std;

bool palindrome(string str , int start , int end){

    if (start > end){
        return true;
    }

    if (str[start] == str[end]){
        start++;
        end--;
    }

    else{
        return false;
    }
}

int main(){
    string str;
    cout<<"Enter the string"<<endl;
    cin >> str;

    int start = 0;
    int end = str.length() - 1;

    if (palindrome(str , start , end)){
        cout<<"Given string is palindrome";
    }

    else{
        cout<<"Not palindrome";
    }

    return 0;
}