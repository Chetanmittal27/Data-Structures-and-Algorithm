// Method 1 : using algorithm
/*
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string str;

    cout<< "Enter your string"<<endl;
    cin>>str;

    cout<< "Original string"<<endl;
    cout<<str<<endl;

    // Reversing the string
    reverse(str.begin(),str.end());

    cout<< "String after reversing"<<endl;
    cout<<str;

    return 0;
}
*/


// without using algorithm

#include<iostream>
using namespace std;

void reverse(char str[] , int n){
    int s = 0;
    int e = n - 1;

    while (s < e){
        swap(str[s],str[e]);
        s++;
        e--;
    }

    cout<<str;
}

int get_length(char str[]){
    int length = 0;
    for(int i = 0;str[i] != '\0'; i++){
        length++;
    }
    return length;
}
int main(){
    char str[50];
    cin>>str;

    int n = get_length(str);
    reverse(str , n);
    return 0;
}