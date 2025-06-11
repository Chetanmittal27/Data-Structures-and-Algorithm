#include<iostream>
using namespace std;

void reverse(char str[],int n){

    int s=0;
    int e=n-1;

    while (s < e){
        swap(str[s],str[e]);
        s++;
        e--;
    }

    cout<<"String after reversing is"<<endl;
    cout<<str;
}


int main(){
    char str[50];

    cout<<"Enter your string"<<endl;
    cin>>str;

    int n=0;

    for(int i=0;i<50;i++){
        if (str[i] != '\0'){
            n+=1;
        }

        else{
            break;
        }
    }
    cout<<n;

    reverse(str,n);
}