#include<iostream>
#include<algorithm>
using namespace std;


int Binary_Search(int arr[] , int low , int high , int x){
    int mid = (low + high) / 2;

    while(low < high){
        if(arr[mid] == x){
            return mid;
        }

        if(x > arr[mid]){
            return Binary_Search(arr , mid + 1 , high , x);
        }

        else if(x < arr[mid]){
            return Binary_Search(arr , low , mid , x);
        }

        mid = (low + high) / 2;
    }

    return -1;
}

int exponential_search(int arr[] , int n , int x){
    if(arr[0] == x){
        return 0;
    }

    int i = 1;
    while(i < n && arr[i] <= x){
        i = i * 2;
    }

    return Binary_Search(arr , i/2 , min(i , n-1) , x);
}

int main(){
    int arr[] = {2, 3, 4, 10, 40, 50, 80, 100, 120, 200};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cin >> x;

    cout << exponential_search(arr , n , x);
    return 0;
}