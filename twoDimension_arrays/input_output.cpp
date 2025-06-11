#include<iostream>
using namespace std;
int main(){

    int arr[3][4];

    // taking elements of array as input
    cout<<"input"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    // printing the elements of array
    cout<<"elements of array are "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}