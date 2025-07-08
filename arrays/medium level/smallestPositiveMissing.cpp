#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int smallestMissing(vector<int>&arr){
    sort(arr.begin() , arr.end());

    int check = 1;
    for(int i=0;i<arr.size();i++){

        if(arr[i] > 0){

            if(arr[i] == check){
                check++;
            }
        }
    }

    return check;
}

int main(){
    vector<int>arr = {2,-3,4,1,1,7};
    cout << smallestMissing(arr);
    return 0;
}