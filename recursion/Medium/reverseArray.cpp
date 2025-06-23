#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void helper(vector<int>&arr , int n , int i){
    if(i >= n/2) return;

    swap(arr[i] , arr[n-i-1]);

    helper(arr , n , i+1);
}


void reverse(vector<int>&arr , int n){
    int i = 0;

    helper(arr , n , i);

    for(int j=0;j<n;j++){
        cout << arr[j] << " ";
    }
}

int main(){
    vector<int>arr = {1,2,3,4,2};
    int n = 5;

    reverse(arr , n);
    return 0;
}