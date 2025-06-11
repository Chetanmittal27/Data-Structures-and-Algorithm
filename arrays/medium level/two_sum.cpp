// Brute force approach
/*
#include<iostream>
using namespace std;

bool checkTwoSum(int arr[] , int n , int target){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j] == target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[] = {2,6,5,8,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cin >> target;

    if(checkTwoSum(arr , n , target)){
        cout << "Present" << endl;
    }

    else{
        cout << "Not present" << endl;
    }

    return 0;
}
*/


#include<iostream>
#include<unordered_map>
using namespace std;

bool checkTwoSum(int arr[] , int n , int target){
    unordered_map<int , int>mpp;

    for(int i=0;i<n;i++){
        int k = target - arr[i];
        if(mpp.find(k) != mpp.end()){
            return true;
        }
        
        mpp.insert({arr[i] , i});
    }
    return {};
}
