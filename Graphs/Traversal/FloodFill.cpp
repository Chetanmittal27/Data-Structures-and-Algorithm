class Solution {
    public:

    void dfs(int row , int col , int newColor , int iniColor , vector<vector<int>> &ans , vector<int> &delRow , vector<int> &delCol , vector<vector<int>> &image){

        ans[row][col] = newColor;
        int m = image.size();
        int n = image[0].size();

        for(int i=0;i<4;i++){

            int mrow = row + delRow[i];
            int ncol = col + delCol[i];

            if(mrow >= 0 && mrow < m  &&  ncol >= 0 && ncol < n  &&  image[mrow][ncol] == iniColor  &&  ans[mrow][ncol] != newColor){
                dfs(mrow , ncol , newColor , iniColor, ans , delRow, delCol , image);
            }
        }
    }


    vector<vector<int>> floodFill(vector<vector<int>> image , int sr , int sc , int color){

        vector<vector<int>> ans = image;

        int iniColor = image[sr][sc];
        vector<int>delRow = {-1,0,1,0};
        vector<int>delCol = {0,1,0,-1};

        dfs(sr , sc , color , iniColor , ans , delRow , delCol , image);

        return ans;
    }
}