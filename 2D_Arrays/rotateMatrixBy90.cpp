// Rotate an matrix by 90 Deg.
// Using extra space
/*
#include<iostream>
#include<vector>
using namespace std;

void rotateMatrix(vector<vector<int>>&arr){
    int m = arr.size();
    int n = arr[0].size();

    vector<vector<int>>temp(m , vector<int>(n));

    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         temp[i][j] = arr[i][j];                       // no need of this loop
    //     }
    // }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            temp[i][j] = arr[n-j-1][i];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << temp[i][j] << " ";
        }
        cout << endl;
    }
}


int main(){
    vector<vector<int>>arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    rotateMatrix(arr);
    return 0;
}
*/

// Without using extra space
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotateMatrix(vector<vector<int>>&arr){
    int m = arr.size();
    int n = arr[0].size();

    // Transpose of the matrix
    for(int i=0;i<m-1;i++){
        for(int j=i+1;j<n;j++){
            swap(arr[i][j] , arr[j][i]);
        }
    }

    // reverse elements of each row
    for(int i=0;i<m;i++){
        for(int j=0;j<n/2;j++){
            swap(arr[i][j] , arr[i][n-j-1]);
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
        {1,5,9,13},
        {2,6,10,14},
        {3,7,11,15},
        {4,8,12,16}
    };

    rotateMatrix(arr);
    return 0;
}