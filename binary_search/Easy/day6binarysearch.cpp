#include<iostream>
using namespace std;

int binary_search(int arr[],int size,int key){

    int start=0;
    int end=size-1;

    int mid=(start + end)/2;

    while (start<=end){
        if (arr[mid]==key){
            return mid;
        }

        if (key > arr[mid]){
            start=mid+1;
        }

        else{
            end=mid-1;
        }

        mid=(start + end)/2;
    }
    return -1;
}


int main(){
    int arr[]={3,7,11,13,27};
    int size=5;

    int key=19;

    cout<<binary_search(arr,size,key);
    return 0;
}