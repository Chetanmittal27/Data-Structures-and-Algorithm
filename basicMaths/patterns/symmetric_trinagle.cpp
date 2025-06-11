#include<iostream>
using namespace std;

void upper_symmetry(int n){
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


void lower_symmetry(int n){
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"* ";
        }

        for(int j=1;j<=2*i;j++){
            cout<<"  ";
        }

        for(int j=1;j<=n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    upper_symmetry(n);
    lower_symmetry(n);
    return 0;
}