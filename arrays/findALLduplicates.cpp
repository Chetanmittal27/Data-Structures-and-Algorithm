// Given an array arr of integers, find all the elements that occur more than once in the array. If no element repeats, return an empty array.

/*
#include<iostream>
#include<vector>
using namespace std;

void all_duplicates(vector<int>arr){
    
    vector<int> v;
    int size = arr.size();
    vector<int> count(size,0);

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            
            if (arr[j] == arr[i]){
                count[arr[i]]++;

            }
        }
    }

    for(int i=0;i<size;i++){
        if (count[arr[i]] > 1){
            v.push_back(arr[i]);
            count[arr[i]] = 0;
        }
    }

    for(int i:v){
        cout<<i<<" ";
    }
}


int main(){
    vector<int> arr = {4,3,2,7,8,2,3,1};
    all_duplicates(arr);
    return 0;

}
*/

// Better approach
/*
class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        unordered_map<int , int>mpp;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        
        for(auto it : mpp){
            if(it.second > 1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
*/

// Optimal approach
class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        
        vector<int>ans;
        unordered_set<int>st;
        
        for(int i=0;i<arr.size();i++){
            if(st.find(arr[i]) != st.end()){
                ans.push_back(arr[i]);
            }
            
            else{
                st.insert(arr[i]);
            }
        }
        return ans;
    }
};