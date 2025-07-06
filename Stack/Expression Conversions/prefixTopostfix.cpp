#include<iostream>
#include<stack>
#include<string>

using namespace std;

string Prefix_To_Postfix(string s){

    int n = s.length();
    stack<string>st;

    for(int i=n-1;i>=0;i--){

        char ch = s[i];

        if(isalnum(ch)){
            st.push(string(1 , ch));
        }

        else{

            string t1 = st.top();
            st.pop();

            string t2 = st.top();
            st.pop();

            string str = t1 + t2 + ch;
            st.push(str);
        }
    }
    
    return st.top();
}


int main(){
    string s = "/-AB*+DEF";
    string ans = Prefix_To_Postfix(s);

    for(char it : ans){
        cout << it;
    }

    return 0;
}