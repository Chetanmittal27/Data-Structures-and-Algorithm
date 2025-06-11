#include<iostream>
using namespace std;

bool binary_search(int arr[] , int start , int end , int key){

    if (start > end){
        return false;
    }

    int mid = (start + end) / 2;

    if (arr[mid] == key){
        return true;
    }

    if (arr[mid] < key){
        return binary_search(arr , mid + 1 , end , key);
    }

    else { 
        return binary_search(arr , start , mid - 1 , key);
    }
}

int main(){
    int arr[]= {1,3,7,9,11,12,45};
    int size = sizeof(arr) / sizeof(int);

    int start = 0;
    int end = size - 1;
    int key;
    cin >> key;

    if (binary_search(arr , start , end ,key)){
        cout<<"present";
    }

    else{
        cout<<"not present";
    }

    return 0;
}