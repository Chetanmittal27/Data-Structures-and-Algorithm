#include<iostream>
using namespace std;

void swap_alternate(int arr[],int n){

    cout<<"Original array"<<endl;
    for(int j = 0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;

    if (n % 2 == 0){
        for(int i = 0;i < n;i = i + 2){
            swap(arr[i] , arr[i+1]);
        }
    }

    else{
        for(int i = 0;i < n -1;i = i + 2){
            swap(arr[i],arr[i+1]);
        }
    }


    cout<<"array after swapping"<<endl;
    for(int k = 0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    swap_alternate(arr,n);
    return 0;
}