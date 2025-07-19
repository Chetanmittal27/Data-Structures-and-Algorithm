#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n , m;
    cin >> n >> m;

    vector<int>lst(n+1);

    for(int i=0;i<m;i++){
        int u , v;
        cin >> u >> v;

        lst[u].push_back(v);
        lst[v].push_back(u);
    }
}