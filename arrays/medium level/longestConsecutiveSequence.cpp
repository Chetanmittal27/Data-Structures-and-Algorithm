// Given an array nums of n integers, return the length of the longest sequence of consecutive integers. The integers in this sequence can appear in any order
// Better approach
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int longest = 1;
        int cnt = 1;
        
        if(nums.empty()){
            return 0;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i] != nums[i-1]  &&  nums[i]-nums[i-1] == 1){
                cnt++;
            }

            else if(nums[i] - nums[i-1] > 1){
                longest = max(longest , cnt);
                cnt = 1;
            }
        }
        longest = max(longest , cnt);
        return longest;
    }
};



// Optimal approach
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int longest = 1;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }

        if(nums.empty()){
            return 0;
        }
        for(auto it : st){
            if(st.find(it-1) == st.end()){
                int cnt = 1;
                int x = it;

                while(st.find(x+1) != st.end()){
                    cnt++;
                    x = x + 1;
                }
                longest = max(longest , cnt);
            }
        }
        return longest;
    }
};
