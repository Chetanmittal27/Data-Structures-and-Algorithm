#include<iostream>
using namespace std;

int Missing_Number(int arr[] , int n){
    int ans = 0;
    for(int i=0;i<n+1;i++){
        ans = ans ^ (i+1);
    }

    for(int i=0;i<n;i++){
        ans = ans ^ arr[i];
    }

    return ans;
}

int main(){
    int arr[] = {1,2,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "The missing number in the array is : " << Missing_Number(arr , n);
    return 0;
}