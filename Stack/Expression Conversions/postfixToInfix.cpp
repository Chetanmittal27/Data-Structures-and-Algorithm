#include<iostream>
#include<stack>
#include<string>

using namespace std;

string Postfix_To_Infix(string s){

    stack<string>st;

    for(int i=0;i<s.size();i++){

        char ch = s[i];

        if(isalnum(ch)){
            st.push(string(1,ch));
        }

        else{
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();

            string str = '('+ t1 + ch + t2 + ')';

            st.push(str);
        }
    }
    return st.top();
}


int main(){
    string s = "AB-DE+F*/";
    string ans = Postfix_To_Infix(s);

    for(auto it : ans){
        cout << it;
    }

    return 0;
}