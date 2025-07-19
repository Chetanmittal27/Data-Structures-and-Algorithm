class Solution{
    public:

    void dfs_recurse(vector<int> &dfs , int start , vector<int> &adj , int vis[]{
        vis[start] = 1;
        dfs.push_back(start);

        for(auto it : adj[start]){
            if(!vis[it]){
                dfs_recurse(dfs , it , adj , vis);
            }
        }
    })


    vector<int>DFS(int v , vector<int>adj){

        int vis[v] = {0};
        int start = 0;

        vector<int>dfs;

        dfs_recurse(dfs , start , adj , vis);

        return dfs;
    }
}