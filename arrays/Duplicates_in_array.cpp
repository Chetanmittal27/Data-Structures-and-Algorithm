// code studio problem 20(code 360 by coding ninjas)
#include<iostream>
#include<vector>
using namespace std;

int Duplicate_element(vector<int>arr){
    int N = arr.size();

    int ans = 0;
    for(int i=0;i<N;i++){
        ans = ans ^ arr[i];
    }

    for(int j=0;j<=N-1;j++){
        ans = ans ^ j;
    }

    return ans;
}

int main(){
    vector<int>arr;
    
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(1);

    cout<<Duplicate_element(arr);
    return 0;
}