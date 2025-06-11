#include<iostream>
using namespace std;

void equilateral(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }

        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void invert_equilateral(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<"  ";
        }

        for(int j=1;j<=2*(n-i)+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    equilateral(n);
    invert_equilateral(n);
    return 0;
}