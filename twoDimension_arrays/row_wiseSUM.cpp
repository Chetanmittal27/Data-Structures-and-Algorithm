#include<iostream>
using namespace std;

void sum(int arr[][4]){

    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<4;j++){
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}

int main(){
    int arr[3][4] = {{10,20,30,50},{40,52,80,68},{54,86,74,95}};

    sum(arr);
}