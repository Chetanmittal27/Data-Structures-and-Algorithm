#include<iostream>
#include<stack>
#include<string>
using namespace std;


int precedence(char ch){
    if(ch == '^') return 3;
    else if(ch == '/' || ch == '*') return 2;
    else if(ch == '+' || ch == '-') return 1;

    return -1;
}


string Infix_to_Postfix(string s){

    string ans = "";
    stack<char>st;

    for(int i=0;i<s.size();i++){

        char ch = s[i];

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


int main(){
    string s = "A*(B/(C-D))^((E+F)*(G+H))^(I*J)";
    string ans = Infix_to_Postfix(s);

    for(auto it : ans){
        cout << it;
    }

    return 0;
}