/*
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int **arr = new int *[n];

    // creation of 2D array using dynamic memory allocation.

    for(int i = 0;i<n;i++){
        arr[i] = new int[n];
    }

    // taking input
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin >> arr[i][j];
        }
    }

    // printing array
      for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout << arr[i][j]<< " ";
        }
        cout<<endl;
    }
}
*/



// For different rows and columns.
#include<iostream>
using namespace std;

int main(){

    int m;
    cin >> m;

    int n;
    cin >> n;

    int **arr = new int *[m];

    // creation of 2D array using dynamic memory allocation.

    for(int i = 0;i<n;i++){
        arr[i] = new int[n];
    }

    // taking input
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cin >> arr[i][j];
        }
    }

    // printing array
      for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cout << arr[i][j]<< " ";
        }
        cout<<endl;
    }
}