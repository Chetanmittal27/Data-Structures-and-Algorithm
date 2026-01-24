#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main(){
    int n , m;
    cout << "Enter the number of vertices" << endl;
    cin >> n;
    cout << "Enter the number of edges" << endl;
    cin >> m;

    unordered_map<int , vector<int>>mpp;

    for(int i=0;i<m;i++){
        int u , v;
        cin >> u >> v;

        mpp[u].push_back(v);
        mpp[v].push_back(u);
    }

    for(auto &it : mpp){

        cout << "For vertex " << it.first << endl;
        for(auto ele : it.second){
            cout << ele << " ";
        }

        cout << endl;
    }

    return 0;
}