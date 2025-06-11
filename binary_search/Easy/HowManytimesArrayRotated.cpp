// Better approach
/*
#include<iostream>
#include<vector>
using namespace std;

int findkRotation(vector<int>&arr){
    int k = 0;
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[(i+1) % n] < arr[i % n]){
            k = (i+1) % n;
            break;
        }
    }
    return k;
}

int main(){
    vector<int>arr1 = {4,5,6,7,0,1,2,3};
    vector<int>arr2 = {3,4,5,1,2};

    cout << findkRotation(arr1) << endl;
    cout << findkRotation(arr2) << endl;
    return 0;
}
*/

// Optiml approach
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int NumberOfRotations(vector<int>&arr){
    int low = 0;
    int high = arr.size() - 1;
    int small = INT_MAX;

    while(low <= high){
        int mid = (low + high) / 2;

        if(arr[low] <= arr[high]){
            return low;
        }

        if(arr[low] <= arr[mid]){
            small = min(small , arr[low]);
            low = mid + 1;
        }

        else{
            small = min(small , arr[mid]);
            high = mid - 1;
        }
    }
    return small;
}

int main(){
    vector<int>arr = {4,5,6,7,0,1,2,3};
    cout << NumberOfRotations(arr);
    return 0;
}