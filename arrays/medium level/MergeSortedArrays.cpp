// Merged Two sorted arrays.

// Using extra space

/*

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr1 , vector<int>&arr2){

    vector<int>arr;

    int m = arr1.size();
    int n = arr2.size();

    int left = 0;
    int right = 0;

    while(left < m && right < n){
        if(arr1[left] <= arr2[right]){
            arr.push_back(arr1[left]);
            left++;
        }

        else{
            arr.push_back(arr2[right]);
            right++;
        }
    }

    while(left < m){
        arr.push_back(arr1[left]);
        left++;
    }

    while(right < n){
        arr.push_back(arr2[right]);
        right++;
    }

    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
}

int main(){
    vector<int>arr1 = {1,3,5,7};
    vector<int>arr2 = {0,2,6,8,9};

    merge(arr1 , arr2);
    return 0;
}
*/

// without using extra space
// TC : O(min(m , n)) + O(mlogm) + O(nlogn)
// SC : O(1)
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int>&arr1 , vector<int>&arr2){
    int m = arr1.size();
    int n = arr2.size();

    int left = m - 1;
    int right = 0;

    while(left >= 0 && right < n){
        
        if(arr1[left] >= arr2[right]){
            swap(arr1[left] , arr2[right]);
            left--;
            right++;
        }
        else{
            break;
        }
    }

    sort(arr1.begin() , arr1.end());
    sort(arr2.begin() , arr2.end());

    for(int i=0;i<arr2.size();i++){
        arr1.push_back(arr2[i]);
    }

    for(int i=0;i<arr1.size();i++){
        cout << arr1[i] << " ";
    }
}

int main(){
    vector<int>arr1 = {1,2,3,5,7};
    vector<int>arr2 = {0,2,6,8,9};

    merge(arr1 , arr2);
    return 0;
}
*/


#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr1 , int m , vector<int>&arr2 , int n){
    int idx = m + n - 1;
    int i = m - 1;
    int j = n - 1;

    while(i >= 0 && j >= 0){
        if(arr1[i] >= arr2[j]){
            arr1[idx] = arr1[i];
            idx--;
            i--;
        }

        else{
            arr1[idx] = arr2[j];
            idx--;
            j--;
        }
    }

    while(j >= 0){
        arr1[idx] = arr2[j];
        idx--;
        j--;
    }

    for(int k=0;k<arr1.size();k++){
        cout << arr1[k] << " ";
    }
}

int main(){
    vector<int>arr1 = {1,2,3,0,0,0};
    vector<int>arr2 = {2,5,6};
    int m = 3;
    int n = 3;

    merge(arr1 , m , arr2 , n);
    return 0;
}