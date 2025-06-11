// Brute force approach
/*

#include<iostream>
#include<vector>
using namespace std;

int kth_Positive(vector<int>&arr , int k){
    for(int i=0;i<arr.size();i++){
        if(arr[i] <= k){
            k++;
        }
    }
    return k;
}

int main(){
    vector<int>arr = {2,3,4,7,11};
    int k = 5;
    cout << kth_Positive(arr , k);
    return 0;
}

*/

// Optimal Approach
#include<iostream>
#include<vector>
using namespace std;

int kth_Positive(vector<int>&arr , int k){
    int low = 0;
    int high = arr.size() - 1;

    while(low <= high){
        int mid = (low + high) / 2;

        int missing = arr[mid] - (mid + 1);

        if(missing < k){
            low = mid + 1;
        }

        else{
            high = mid - 1;
        }
    }
    return k + high + 1;
}

int main(){
    vector<int>arr = {2,3,4,7,11};
    int k = 5;
    cout << kth_Positive(arr ,k);
    return 0;
}