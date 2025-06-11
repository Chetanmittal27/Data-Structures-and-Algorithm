#include<iostream>
using namespace std;

void symmetry(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }

        for(int j=1;j<=2*(i-1);j++){
            cout<<"  ";
        }

        for(int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void invert(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }

        for(int j=1;j<=2*(n-i);j++){
            cout<<"  ";
        }

        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;

    symmetry(n);
    invert(n);
    return 0;
}