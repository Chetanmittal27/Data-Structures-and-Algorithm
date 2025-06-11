#include<iostream>
using namespace std;
void nstartriangle_upper(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void triangle_lower(int n){
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


int main(){
    int n=5;
    nstartriangle_upper(n);
    triangle_lower(n);
    return 0;
}