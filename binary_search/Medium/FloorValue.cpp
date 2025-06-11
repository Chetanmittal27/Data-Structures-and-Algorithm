// The floor of x is the largest element in the array which is smaller than or equal to x.
#include<iostream>
#include<vector>
using namespace std;

int floor_value(vector<int>&arr , int x){
    int low = 0;
    int high = arr.size() - 1;
    int result = -1;

    while(low <= high){
        int mid = (low + high) / 2;

        if(arr[mid] == x){
            return arr[mid];
        }

        else if(arr[mid] < x){
            result = arr[mid];
            low = mid + 1;
        }

        else{
            high = mid - 1;
        }
    }
    return result;
}

int main(){
    vector<int>arr = {3,4,4,7,8,10};
    int x;
    cin >> x;

    cout << floor_value(arr , x);
}