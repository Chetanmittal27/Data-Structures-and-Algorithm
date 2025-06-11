#include<iostream>
#include<vector>
using namespace std;

int upper_bound(vector<int>&arr , int x){
    int low = 0;
    int high = arr.size() - 1;

    while(low <= high){
        int mid = (low + high) / 2;
        
        if(arr[mid] > x){
            high = mid;
        }

        else{
            low = mid + 1;
        }
    }
    return low;
}

int main(){
    vector<int>arr = {3,5,8,9,15,19};
    int x;
    cin >> x;

    cout << upper_bound(arr , x);
    return 0;
}