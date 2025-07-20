class Solution{
    public:

    void dfs(int node , int vis[] , vector<vector<int>> &adjlst){
        vis[node] = 1;
        for(auto it : adjlst[node]){
            if(!vis[it]){
                dfs(it , vis , adjlst);
            }
        }
    }



    int provinces(vector<vector<int>> &adjmat){

        int v = adjmat.size();
        vector<vector<int>> adjlst(v);

        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){

                if(adjmat[i][j] == 1 && i != j){

                    adjlst[i].push_back(j);
                    adjlst[j].push_back(i);
                }
            }
        }


        int vis[v+1] = {0};
        int count = 0;

        for(int i=0;i<v;i++){
            if(!vis[i]){
                count++;
                dfs(i , vis , adjlst);
            }
        }
        return count;
    }
}