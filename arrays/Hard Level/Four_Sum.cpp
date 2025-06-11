// Brute Force  : Tc = O(n^4)  , SC = O(no.of quads) * 2
/*

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        int n = nums.size();
        set<vector<int>>s;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    for(int l=k+1;l<n;l++){

                        long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                        if(sum == target){
                            vector<int>v = {nums[i] , nums[j] , nums[k] , nums[l]};
                            sort(v.begin() , v.end());
                            s.insert(v);

                        }
                    }
                }
            }
        }
        for(auto it : s){
            result.push_back(it);
        }

        return result;
    }
};

*/

// Better Approach
/*

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        set<vector<int>>uniqueVectors;
        int n = nums.size();

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                set<long long>s;
                for(int k=j+1;k<n;k++){

                    long long sum = nums[i] + nums[j];
                    sum = sum + nums[k];
                    long long remaining = target - sum;
                    if(s.find(remaining) != s.end()){

                        vector<int>v = {nums[i] , nums[j] , nums[k] , int(remaining)};
                        sort(v.begin() , v.end());
                        uniqueVectors.insert(v);
                    }

                    s.insert(nums[k]);
                }
            }
        }

        for(auto it : uniqueVectors){
            result.push_back(it);
        }
        return result;
    }
};

*/

// Optimal Approach

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        set<vector<int>>uniqueArray;
        int n = nums.size();

        sort(nums.begin() , nums.end());

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){

                long long firstPartSum = nums[i] + nums[j];
                long long remaining = target - (firstPartSum);
                
                int k = j+1;
                int l = n-1;

                while(k < l){
                    long long sum = nums[k] + nums[l];
                    if(sum == remaining){

                        vector<int>v = {nums[i] , nums[j] , nums[k] , nums[l]};
                        uniqueArray.insert(v);
                        k++;
                        l--;
                    }

                    else if(sum < remaining){
                        k++;
                    }

                    else{
                        l--;
                    }
                }
            }
        }
        for(auto it : uniqueArray){
            result.push_back(it);
        }
        return result;
    }
}; 