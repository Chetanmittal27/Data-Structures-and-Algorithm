// To remove duplicate elements in place from sorted array.
// Brute force approach
/*
#include<iostream>
#include<set>
using namespace std;

int arrsize(int arr[] , int n){
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }

    int index = 0;
    for(auto it : st){
        arr[index] = it;
        index++;
    }

    return index;
}

int main(){
    int arr[] = {1,1,2,2,2,3,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << arrsize(arr , n);
    return 0;
}
*/

// Optimal approach
#include<iostream>
using namespace std;

int arrsize(int arr[] , int n){
    int i = 0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}

int main(){
    int arr[ ] = {1,1,2,2,2,3,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << arrsize(arr , n);
    return 0;
}