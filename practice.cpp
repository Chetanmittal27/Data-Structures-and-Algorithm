#include<iostream>
#include<vector>

using namespace std;

int main(){
    int v , n;

    cout << "Enter the number of vertices" << endl;
    cin >> v;

    cout << "Enter the number of Edges" << endl;
    cin >> n;

    vector<vector<int>>adj(v, vector<int>(v , 0));

    for(int i=0;i<n;i++){
        int p1 , p2;
        cout << "Enter end vertices of edge" << endl;
        cin >> p1 >> p2;

        adj[p1][p2] = 1;
        adj[p2][p1] = 1;
    }


    for(auto it : adj){
        for(auto ele : it){
            cout << ele << " ";
        }

        cout << endl;
    }

    return 0;
}