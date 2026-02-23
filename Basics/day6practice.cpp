/*
#include<iostream>
using namespace std;

int first_occurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int mid=(start + end)/2;
    int ans=-1;

    while (start<=end){
        if (arr[mid]==key){
            ans= mid;
            end=mid-1;
        }
        else if (key>arr[mid]){
            start=mid+1;
        }

        else if (key<arr[mid]){
            end=mid-1;
        }
        
        mid=(start + end)/2;
    }
    return ans;
}


int second_occurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start + end)/2;
    int ans=-1;

    while (start<=end){
        if (arr[mid]==key){
            ans=mid;
            start=mid+1;
        }

        else if(key>arr[mid]){
            start=mid+1;
        }

        else if(key<arr[mid]){
            end=mid-1;
        }

        mid=(start + end)/2;
    }
    return ans;
}


int main(){
    int arr[]={0,0,1,1,2,2,2,2};
    int size=8;
    int key=2;

    cout<<first_occurence(arr,size,key)<<endl;
    cout<<second_occurence(arr,size,key);
    return 0;
}
*/


// Find total no. of occurences of an element in array.
/*
#include<iostream>
using namespace std;

int first_occurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int mid=(start + end)/2;
    int count1=0;
    while (start<=end){
        if (arr[mid]==key){
            count1=count1+1;
            end=mid-1;
        }
        else if (key>arr[mid]){
            start=mid+1;
        }

        else if (key<arr[mid]){
            end=mid-1;
        }
        
        mid=(start + end)/2;
    }
    return count1;
}


int second_occurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start + end)/2;
 
    int count2=0;
    while (start<=end){
        if (arr[mid]==key){
            count2=count2+1;
            start=mid+1;
        }

        else if(key>arr[mid]){
            start=mid+1;
        }

        else if(key<arr[mid]){
            end=mid-1;
        }

        mid=(start + end)/2;
    }
    return count2;
}


int main(){
    int arr[]={0,0,1,1,2,2,2,2};
    int size=8;
    int key=2;

    cout<<first_occurence(arr,size,key)<<endl;
    cout<<second_occurence(arr,size,key)<<endl;
    cout<<"Total no. of occurences of 3 :"<<first_occurence(arr,size,key)+second_occurence(arr,size,key)-1<<endl;
    return 0;
}
*/


// Leetcode problem 852: peak index in a mountain array.
#include<iostream>
using namespace std;

int peakindexmountain(int arr[],int size){
    int start=0;
    int end=size-1;

    int mid=(start + end)/2;

    while (start<end){
        if (arr[mid] < arr[mid+1]){
            start=mid+1;
        }

        else{
            end=mid;
        }

        mid=(start + end)/2;
    }
    return start;
}

int main(){
    int arr[]={3,4,5,1};
    int size=4;

    cout<<peakindexmountain(arr,size);
    return 0;
}