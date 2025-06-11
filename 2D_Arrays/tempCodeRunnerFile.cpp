for(int i=0;i<m;i++){
        for(int j=0;j<n/2;j++){
            swap(arr[i][j] , arr[i][n-j-1]);
        }
    }