// Move all the zeros in an array to the end
// Brute Force approach
/* 
#include<iostream>
#include<vector>
using namespace std;

void move_zeros(int arr[] , int n){
    vector<int>temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    for(int i=0;i<temp.size();i++){
        arr[i] = temp[i];
    }

    for(int i=temp.size();i<n;i++){
        arr[i] = 0;
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1,0,2,3,2,0,0,4,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    move_zeros(arr , n);
    return 0;
}

*/
/*
#include<iostream>
using namespace std;
void moveAllZerosToEnd(int arr[] , int n){
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            cnt = cnt + 1;
        }
    }

    int k = 0;
    for(int j=0;j<n;j++){
        if(arr[j] != 0){
            arr[k++] = arr[j];
        }
    }

    for(int j=cnt;j<n;j++){
        arr[j] = 0;
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1,2,0,0,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveAllZerosToEnd(arr , n);
    return 0;
}
*/

#include<iostream>
#include<algorithm>
using namespace std;
void moveAllZeros(int arr[] , int n){
    int i = 0;
    for(int j=0;j<n;j++){
        if(arr[j] != 0){
            swap(arr[j] , arr[i]);
            i++;
        }
    }

    for(int j=0;j<n;j++){
        cout << arr[j] << " ";
    }
}

int main(){
    int arr[] = {1,2,0,3,4,1,0,4,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveAllZeros(arr , n);
    return 0;
}