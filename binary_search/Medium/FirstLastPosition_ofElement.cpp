#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int>&arr , int target){
    int low = 0;
    int high = arr.size() - 1;
    int result = -1;

    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == target){
            result = mid;
            high = mid - 1;
        }

        else if(arr[mid] < target){
            low = mid + 1;
        }

        else{
            high = mid - 1;
        }
    }
    return result;
}

int lastOccurence(vector<int>&arr , int target){
    int low = 0;
    int high = arr.size() - 1;
    int result = -1;

    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == target){
            result = mid;
            low = mid + 1;
        }

        else if(arr[mid] > target){
            high = mid - 1;
        }

        else{
            low = mid + 1;
        }
    }
    return result;
}

vector<int>First_Last(vector<int>&arr , int target){
    int first = firstOccurence(arr , target);
    int last = lastOccurence(arr , target);

    return {first , last};
}

int main(){
    vector<int>arr = {5,7,7,8,8,10};
    int target;
    cin >> target;

    vector<int>ans = First_Last(arr , target);
    cout << ans[0] << " " << ans[1];
    return 0;
}