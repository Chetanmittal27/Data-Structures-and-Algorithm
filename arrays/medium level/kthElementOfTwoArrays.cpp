// Given two sorted arrays a[] and b[] and an element k, the task is to find the element that would be at the kth position of the combined sorted array.


// Brute Force
// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// int kthElement(vector<int>& a , vector<int>& b  , int k){

//     int m = a.size();
//     int n = b.size();

//     if(k > m+n) {
//         return -1;
//     }

//     for(int i=0;i<n;i++){
//         a.push_back(b[i]);
//     }

//     sort(a.begin() , a.end());

//     return a[k-1];

// }



// Optimal Approach
#include<iostream>
#include<vector>

using namespace std;

int kthElement(vector<int>& a , vector<int>& b  , int k){

    int m = a.size();
    int n = b.size();

    if(k > m+n){
        return -1;
    }


    int i = 0 , j = 0;

    int ans = -1;

    while(i < m && j < n){

        if(a[i] <= b[j]){
            ans = a[i];
            i++;
        }

        else{
            ans = b[j];
            j++;
        }

        k--;

        if(k == 0){
            return ans;
        }
    }

    while(i < m){
        ans = a[i];
        i++;
        k--;

        if(k == 0){
            return ans;
        }
    }

    while(j < n){
        ans = b[j];
        j++;
        k--;

        if(k == 0){
            return ans;
        }
    }

    return -1;
}



int main(){
    vector<int>a = {2,3,6,7,9};
    vector<int>b = {1,4,8,10};

    int k;
    cin >> k;

    cout << kthElement(a , b , k);

    return 0;
}