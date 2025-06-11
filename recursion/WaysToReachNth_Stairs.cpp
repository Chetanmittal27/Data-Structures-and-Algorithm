#include<iostream>
using namespace std;

int waystoreach_n_stairs(int n){

    if (n == 0){
        return 1;
    }

    if (n < 0){
        return 0;
    }

    else{
        return waystoreach_n_stairs(n-1) + waystoreach_n_stairs(n-2);
    }
}

int main(){
    int n;
    cout<<"enter the nth stair"<<endl;
    cin>>n;

    cout<<"the number of ways of climbing nth stairs"<<endl;
    cout<<waystoreach_n_stairs(n);
    
    return 0;
}