#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n , m;
    cout << "Enter the number of vertices" << endl;
    cin >> n;
    cout << "Enter the number of edges" << endl;
    cin >> m;

    vector<vector<int>>arr(n+1 , vector<int>(n+1 , 0));

    for(int i=0;i<m;i++){
        int u , v;
        cin >> u >> v;

        arr[u][v] = 1;
        arr[v][u] = 1;
    }


    // Print adjacency Matrix
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}