// Swap alternate elements with their next element in an array.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void swap_alternate(vector<int>&arr){
    int n = arr.size();
    if(n % 2 == 0){
        for(int i=0;i<n;i=i+2){
            swap(arr[i] , arr[i+1]);
        }
    }

    else{
        for(int i=0;i<n-1;i=i+2){
            swap(arr[i] , arr[i+1]);
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    vector<int>arr = {1,2,7,8,5};
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    swap_alternate(arr);
    return 0;
}