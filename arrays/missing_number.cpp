// Find missing number in the array
// brute force approach
/*
#include<iostream>
using namespace std;
int missing_number(int arr[] , int n){
    for(int i=1;i<=n;i++){
        int check = 0;
        for(int j=0;j<n-1;j++){
            if(arr[j] == i){
                check = 1;
                break;
            }
        }
        if(check == 0){
            return i;
        }
    }
}

int main(){
    int arr[] = {1,2,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "missing number is : " << missing_number(arr , n);
    return 0;
}
*/

// Better approach
/*
#include<iostream>
using namespace std;
int missing_number(int arr[] , int n){
    int size = n + 1;
    int hash[size] = {0};
    for(int i=1;i<=n;i++){
        hash[i]++;
    }

    for(int i=0;i<n-1;i++){
        hash[arr[i]]++;
    }

    for(int i=0;i<size;i++){
        if(hash[i] == 1){
            return i;
        }
    }
}

int main(){
    int arr[] = {1,2,3,5,6,7,8};
    int n = (sizeof(arr) / sizeof(arr[0]))+1;
    cout << missing_number(arr,n);
    return 0;
}
*/

// Optimal approach
#include<iostream>
using namespace std;
int missing_number(int arr[] , int n){
    int ans = 0;
    for(int i = 1;i<=n;i++){
        ans = ans ^ i;
    }

    for(int i = 0;i<n-1;i++){
        ans = ans ^ arr[i];
    }

    return ans;
}

int main(){
    int arr[] = {1,2,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << missing_number(arr , n);
    return 0;
}