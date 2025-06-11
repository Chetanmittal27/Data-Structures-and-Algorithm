#include<iostream>
using namespace std;

void counting(int n){

    // Base case
    if (n == 0){
        return ;
    }

    // processing
    cout<<n<<endl;

    counting(n-1);
}

int main(){
    int n;
    cin>>n;

    counting(n);
    return 0;
}