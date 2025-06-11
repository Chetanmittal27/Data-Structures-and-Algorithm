// Maximum Subarray Sum
// Better Approach
/*
#include<iostream>
#include<vector>
using namespace std;

int max_Subarraysum(int arr[] , int n){
    vector<int>tempArr;

    for(int i=0;i<n;i++){
        int total = 0;
        int sum = 0;
        
        for(int j=i;j<n;j++){
            total = total + arr[j];

            if(total > sum){
                sum = total;
            }
        }

        tempArr.push_back(sum);
    }

    int large = tempArr[0];
    for(int i=0;i<n;i++){
        if(tempArr[i] > large){
            large = tempArr[i];
        }
    }

    return large;
}

int main(){
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The maximum sum of the subarray is : "<<max_Subarraysum(arr, n);
    return 0;
}
*/

// Optimal Approach
#include<iostream>
using namespace std;
int max_subarraySum(int arr[] , int n){
    int sum = 0;
    int maxi = -1;

    for(int i=0;i<n;i++){
        sum = sum + arr[i];

        if(sum > maxi){
            maxi = sum;
        }

        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}

int main(){
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << max_subarraySum(arr , n);
    return 0;
}