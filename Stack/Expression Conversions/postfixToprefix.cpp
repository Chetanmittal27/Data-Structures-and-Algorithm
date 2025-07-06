#include<iostream>
#include<stack>
#include<string>

using namespace std;

string Postfix_To_Prefix(string s){

    stack<string>st;

    for(int i=0;i<s.length();i++){

        char ch = s[i];

        if(isalnum(ch)){
            st.push(string(1,ch));
        }

        else{

            string t1 = st.top();
            st.pop();
            
            string t2 = st.top();
            st.pop();

            string str = ch + t2 + t1;

            st.push(str);
        }
    }

    return st.top();
}

int main(){
    string s = "AB-DE+F*/";
    string ans = Postfix_To_Prefix(s);

    for(auto it : ans){
        cout << it;
    }

    return 0;
}