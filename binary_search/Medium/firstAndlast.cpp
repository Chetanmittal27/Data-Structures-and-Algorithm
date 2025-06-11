#include<iostream>
using namespace std;

int first_occurence(int arr[] , int n , int target){
    int start = 0 ;
    int end = n - 1;
    int mid = (start + end) /2;

    int ans = -1;

    while(start <= end){

        if (arr[mid] == target){
            ans = mid;
            end = mid - 1;
        }

        else if (arr[mid] < target){
            start = mid + 1;
        }

        else if (arr[mid] > target){
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return ans;
}


int last_occurence(int arr[] , int n , int target){
    int start = 0 ;
    int end = n - 1;
    int mid = (start + end) /2;

    int ans = -1;

    while(start <= end){

        if (arr[mid] == target){
            ans = mid;
            start = mid + 1;
        }

        else if (arr[mid] < target){
            start = mid + 1;
        }

        else if (arr[mid] > target){
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return ans;
}

int main(){
    int arr[] = {1,2,3,3,5};
    int n = sizeof(arr) / sizeof(int);

    cout<<"First occurence : "<<first_occurence(arr , n , 3)<<endl;
    cout<<"last occurence : "<<last_occurence(arr , n , 3)<<endl;

    return 0;
}