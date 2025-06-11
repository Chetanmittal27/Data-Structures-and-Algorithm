#include<iostream>
#include<string>

using namespace std;

bool palindrome(string str_check , int start , int end){


    if (start > end){
        return true;
    }

    if (str_check[start] != str_check[end]){
        return false;
    }

    else{
        start++;
        end--;
    }

    return palindrome(str_check , start , end);
}

int main(){
    string str = "abba@";

    string str_check;

    for(int i = 0;i < str.length() ; i++){
        if (isalnum(str[i])){
            str_check . push_back(str[i]);
        }
    }

    int start = 0;
    int end = str_check . length() - 1;
    

    if (palindrome(str_check , start , end)){
        cout<<"it is palindrome";
    }

    else{
        cout<<"not palindrome";
    }

    return 0;
}