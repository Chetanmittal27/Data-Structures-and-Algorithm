// Left rotate an array by k places
// Brute force approach
// Left rotate an array by k places
/*
#include<iostream>
using namespace std;

void left_rotate(int arr[] , int n , int k){

    for(int i=0;i<k;i++){
        for(int i=1;i<n;i++){
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout << "No. of places want to rotate" << endl;
    cin >> k;

    left_rotate(arr , n , k);
    return 0;
}
*/



// Better Approach
/*
#include<iostream>
using namespace std;

void left_rotate(int arr[] , int n , int k){
    k = k % n;
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i] = arr[i];
    }

    for(int i=k;i<n;i++){
        arr[i-k] = arr[i];
    }

    for(int i=n-k;i<n;i++){
        arr[i] = temp[i-(n-k)];
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin >> k;
    left_rotate(arr , n , k);
    return 0;
}
*/


// Optimal approach
#include<iostream>
#include<algorithm>
using namespace std;

void left_rotate(int arr[] , int n , int k){
    reverse(arr , arr+k);
    reverse(arr+k, arr+n);
    reverse(arr , arr+n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin >> k;

    left_rotate(arr , n , k);
    return 0;
}