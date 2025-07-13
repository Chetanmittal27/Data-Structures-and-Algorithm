/*
Given an array arr[ ] of integers, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.

*/


// Brute force
/*
class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int>ans;
        
        for(int i=0;i<n;i++){
            
            int large = -1;
            
            for(int j=n-1;j>i;j--){
                
                if(arr[j] > arr[i]){
                    
                    large = arr[j];
                }
            }
            
            ans.push_back(large);
        }
        
        
        return ans;
    }
};
*/


// Optimal approach

#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

vector<int>NextGreaterElement (vector<int>&arr){

    int n = arr.size();

    stack<int>st;
    vector<int>ans;

    for(int i=n-1;i>=0;i--){

        while(!st.empty() && st.top() <= arr[i]){
            st.pop();
        }

        if(st.empty()){
            ans.push_back(-1);
        }

        else{
            if(st.top() > arr[i]){
                ans.push_back(st.top());
            }
        }

        st.push(arr[i]);
    }

    reverse(ans.begin() , ans.end());

    return ans;

}

int main(){
    vector<int>arr = {6,8,0,1,3};

    vector<int>result = NextGreaterElement(arr);

    for(auto it : result){
        cout << it << " ";
    }

    return 0;
}