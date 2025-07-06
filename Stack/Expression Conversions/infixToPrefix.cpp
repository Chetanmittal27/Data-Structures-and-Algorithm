#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;


int precedence(char ch){
    if(ch == '^') return 3;
    else if(ch == '/' || ch == '*') return 2;
    else if(ch == '+' || ch == '-') return 1;

    return -1;
}


string conversion(const string& reversed){

    string ans = "";
    stack<char>st;

    for(int i=0;i<reversed.size();i++){

        char ch = reversed[i];

        if(isalnum(ch)){
            ans = ans + ch;
        }

        else if(ch == '('){
            st.push(ch);
        }

        else if(ch == ')'){
            while(st.top() != '('){
                ans = ans + st.top();
                st.pop();
            }
            st.pop();
        }

        else{
            while(!st.empty() && precedence(ch) <= precedence(st.top())){
                ans = ans + st.top();
                st.pop();
            }

            st.push(ch);
        }
    }

    while(!st.empty()){
        ans = ans + st.top();
        st.pop();
    }

    return ans;
}

string infixToprefix(const string& s){
    string reversed = s;

    reverse(reversed.begin() , reversed.end());

    for(char& ch : reversed){
        if(ch == '(') ch = ')';
        else if(ch == ')') ch = '(';
    }

    string ans = conversion(reversed);
    reverse(ans.begin() , ans.end());

    return ans;
    
}


int main(){
    string s = "(A+B*C/D-E^F*G)";
    string ans = infixToprefix(s);

    for(auto it : ans){
        cout << it;
    }

    return 0;
}