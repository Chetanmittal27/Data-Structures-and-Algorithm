// Brute force
/*
#include<iostream>
#include<vector>
using namespace std;

double median_element(vector<int>&nums1 , vector<int>&nums2){
    int m = nums1.size();
    int n = nums2.size();
    vector<int>ans;

    int i = 0;
    int j = 0;

    while(i < m && j < n){
        if(nums1[i] <= nums2[j]){
            ans.push_back(nums1[i]);
            i++;
        }
        
        else if(nums2[j] <= nums1[i]){
            ans.push_back(nums2[j]);
            j++;
        }
    }

    while(i < m){
        ans.push_back(nums1[i]);
        i++;
    }

    while(j < n){
        ans.push_back(nums2[j]);
        j++;
    }

    int low = 0;
    int high = m + n - 1;

    int mid = (low + high) / 2;
    if((m+n) % 2 == 0){
        return (float(ans[mid] + ans[mid + 1]) / 2);
    }

    else{
        return float(ans[mid]);
    }
}

int main(){
    vector<int>nums1 = {1,2};
    vector<int>nums2 = {3,4};

    cout << median_element(nums1 , nums2);
    return 0;
}
*/

// Optimal appraoch
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

double median_element(vector<int>&nums1 , vector<int>&nums2){
    int m = nums1.size();
    int n = nums2.size();

    if(m > n) return median_element(nums2 , nums1);

    int low = 0;
    int high = m;
    int left = (m + n + 1) / 2;
    int total = m + n;

    while(low <= high){
        int mid1 = low + (high - low) / 2;
        int mid2 = left - mid1;

        int l1 = INT_MIN , l2 = INT_MIN;
        int r1 = INT_MAX , r2 = INT_MAX;

        if(mid1 < m) r1 = nums1[mid1];
        if(mid2 < n) r2 = nums2[mid2];

        if(mid1 - 1 >= 0) l1 = nums1[mid1 - 1];
        if(mid2 - 1 >= 0) l2 = nums2[mid2 - 1];

        if(l1 <= r2 && l2 <= r1){
            if(total % 2 == 1) return max(l1 , l2);
            return (double) (max(l1 , l2) + min(r1 , r2)) / 2.0;
        }

        else if(l1 > r2){
            high = mid1 - 1;
        }
        
        else if(l2 > r1){
            low = mid1 + 1;
        }
    }
    return -1;
}


int main(){
    vector<int>nums1 = {1,3,4,7,10,12};
    vector<int>nums2 = {2,3,6,15};

    cout << median_element(nums1 , nums2);
    return 0;
}