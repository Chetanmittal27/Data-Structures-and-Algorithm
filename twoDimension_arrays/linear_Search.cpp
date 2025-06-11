#include<iostream>
using namespace std;

bool linear_search(int arr[][4] , int target){

    for (int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if (arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main(){

    int arr[3][4] = {10,20,8,4,78,56,24,10,2,3,4,5};

    int target;
    cout<<"Enter the element to search"<<endl;
    cin>>target;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    if (linear_search(arr, target)){
        cout<<"Present";
    }

    else{
        cout<<"Absent";
    }

    return 0;
}