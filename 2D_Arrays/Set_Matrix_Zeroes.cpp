// Brute Force Approach
/*
#include<iostream>
#include<vector>
using namespace std;

void setElements_zeros(vector<vector<int>>arr){
    int m = arr.size();
    int n = arr[0].size();             
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == 0){
                
                for(int j=0;j<n;j++){
                    if(arr[i][j] != 0){
                        arr[i][j] = -1;
                    }
                }

                for(int i=0;i<m;i++){
                    if(arr[i][j] != 0){
                        arr[i][j] = -1;
                    }
                }
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == -1){
                arr[i][j] = 0;
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    vector<vector<int>>arr = {
        {0,1,2,0},
        {3,4,5,2},
        {1,3,1,5}
    };

    setElements_zeros(arr);
    return 0;
}
*/

// Better Approach
#include<iostream>
#include<vector>
using namespace std;

void setElements_zeros(vector<vector<int>> arr){
    int m = arr.size();
    int n = arr[0].size();

    vector<int>rows(n,0);
    vector<int>columns(m,0);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == 0){
                rows[i] = 1;
                columns[j] = 1;
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(rows[i] == 1  || columns[j] == 1){
                arr[i][j] = 0;
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    vector<vector<int>>arr = {
        {0,1,2,0},
        {3,4,5,2},
        {1,3,1,5}
    };

    setElements_zeros(arr);
    return 0;
}