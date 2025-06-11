#include<iostream>
using namespace std;


int reverse(int num){

    int ans=0;
    while(num>0){
        ans=(ans*10)+(num%10);
        num=num/10;
    }

    return ans;
}

int main(){
    int num=123;
    cout<<reverse(num);
    return 0;
    
}