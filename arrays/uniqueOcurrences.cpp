class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int size = arr.size();
        vector<int>ans;

        // sorting the given arr
        sort(arr.begin(), arr.end());

        int i = 0;
        while(i < size){
            int count = 1;
            for(int j = i+1;j<size;j++){
                if (arr[i] == arr[j]){
                    count++;
                }
                else{
                    break;
                }
            }

            ans.push_back(count);
            i = i + count;
        }

        sort(ans.begin(), ans.end());
        int n = ans.size();

        for(int i =0 ;i<n;i++){
            for(int j = i + 1;j<n;j++){
                if(ans[i] == ans[j]){
                    return false;
                }
            }
        }
        return true;
    }
};