// To check the given number is prime or not.

#include<iostream>
using namespace std;

void isprime(int num){

    int ischeck = 1;
    for(int i=2;i<num;i++){
        if(num % i == 0){
            ischeck = 0;
            break;
        }
    }

    if (ischeck == 1){
        cout<<num<<" is a prime no.";
    }

    else{
        cout<<num<<" is not a prime no.";
    }
}

int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;

    isprime(num);
    return 0;
}