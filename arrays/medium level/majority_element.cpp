// You are given an array 'a' of 'n' integers.
// A majority element in the array ‘a’ is an element that appears more than 'n' / 2 times.
// Find the majority element of the array.

// Brute Force Approach
/*
#include<iostream>
using namespace std;
int majorityElement(int arr[] , int n){
    for(int i=0;i<n;i++){
        int cnt = 1;
        for(int j=i+1;j<n;j++){
            if(arr[j] == arr[i]){
                cnt++;
            }
        }
        if(cnt > n/2){
            return arr[i];
        }
    }
    return -1;
}

int main(){
    int arr[] = {2, 2, 1, 3, 1, 1, 3, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << majorityElement(arr , n);
    return 0;
}

*/

// Better Approach
/*
#include<iostream>
using namespace std;
int majorityElement(int arr[] , int n){
    int hash[n] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        if(hash[i] > n/2){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2, 2, 1, 3, 1, 1, 3, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << majorityElement(arr , n);
    return 0;
}
*/


// Optimal Approach : Using Moores Voting Algorithm
#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>&arr){
    int count = 0;
    int ele;
//  Finding majority element
    for(int i=0;i<arr.size();i++){
        if(count == 0){
            ele = arr[i];
        }

        else if(arr[i] == ele){
            count++;
        }

        else{
            count--;
        }
    }
// Checking whether the element we find above is majority element or not.

    int cnt = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] == ele){
            cnt++;
        }
    }
    if(cnt > (arr.size() / 2)){
        return ele;
    }
}

int main(){
    vector<int>arr = {2,2,1,3,1,1,3,1,1};
    cout << "Majority Element is : " << majorityElement(arr) << endl;
    return 0;
}
