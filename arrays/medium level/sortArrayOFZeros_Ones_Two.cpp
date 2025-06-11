/*
#include<iostream>
using namespace std;
void sort_array(int arr[] , int n){
    int cnt0 = 0;
    int cnt1= 0;
    int cnt2 = 0;

    for(int i = 0 ;i<n;i++){
        if(arr[i] == 0){
            cnt0++;
        }
        else if(arr[i] == 1){
            cnt1++;
        }
        else if(arr[i] == 2){
            cnt2++;
        }
    }

    for(int i=0;i<n;i++){
        if(i>=0 && i<cnt0){
            arr[i] = 0;
        }
        else if(i>=cnt0 && i<cnt0+cnt1){
            arr[i] = 1;
        } 
        else if(i>=cnt1 && i<n){
            arr[i] = 2;
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {0,1,2,0,1,2,1,2,0,0,0,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort_array(arr , n);
    return 0;
}
*/

// Dutch National Flag Algorithm
#include<iostream>
#include<algorithm>
using namespace std;
void sort_Array(int arr[] , int n){
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low] , arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }

        else{
            swap(arr[high] , arr[mid]);
            high--;
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {2,0,2,1,1,0,1,2,0,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort_Array(arr , n);
    return 0;
}