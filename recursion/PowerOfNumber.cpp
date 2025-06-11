#include<iostream>
using namespace std;

int power(int n){

    if (n == 0){
        return 1;
    }

    else{
        return 2 * power(n-1);
    }
}

int main(){
    int n;
    cin>>n;

    cout<<"Power of 2 is"<<endl;
    cout<<power(n);
    return 0;
}