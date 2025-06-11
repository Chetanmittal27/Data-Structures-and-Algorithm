#include<iostream>
using namespace std;

int linearSearch(int arr[] , int n , int k){
    for(int i=0;i<n;i++){
        if(arr[i] == k){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {6,7,8,4,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cin >> k;
    
    cout << linearSearch(arr , n , k);
    return 0;
}