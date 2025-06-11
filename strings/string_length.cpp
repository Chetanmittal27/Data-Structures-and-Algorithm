#include<iostream>
using namespace std;



int get_length(char str[]){
    

    int length = 0;

    for(int i = 0; str[i] != '\0'; i++){
        length = length +1;
    }
    return length;
}
int main(){
    char str[50];

    cout<<"Enter your string"<<endl;
    cin>>str;

    cout << "The length of string is"<<endl;
    cout<< get_length(str);
}