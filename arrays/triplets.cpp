#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	sort(arr.begin(), arr.end());
    set<vector<int>> st;

    for(int i = 0;i<n;i++){
        for(int j = i + 1;j<n;j++){
            for(int k = j + 1;k<n;k++){

                if (arr[i]+arr[j]+arr[k] == K){
                    vector<int>temp = {arr[i],arr[j],arr[k]};

                    st.insert(temp);
                }
            }
        }
    }
     vector<vector<int> > ans (st.begin(),st.end());
    return ans;
}

// in above code time limit exceeded.