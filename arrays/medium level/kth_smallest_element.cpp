// Brute Force

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int kthSmallestElement(vector<int>& arr , int k){

    int n = arr.size();

    if(k > n) return -1;

    sort(arr.begin() , arr.end());

    return arr[k-1];
}

int main(){

    vector<int>arr = {10,5,4,3,48,6,2,33,53,10};
    int k = 4;
    
    cout << kthSmallestElement(arr , k);

    return 0;
}


// Better Approach
#include<iostream>
#include<vector>
#include<map>

using namespace std;

int kthSmallest(vector<int>& arr , int k){

    int n = arr.size();
    if(k > n) return -1;

    map<int , int>mpp;

    for(int i=0;i<n;i++){

        mpp[arr[i]]++;
    }

    for(auto it : mpp){

        if(it.second >= k) {
            return it.first;
        }

        else{

            k = k - it.second;
        }
    }

    return -1;
}