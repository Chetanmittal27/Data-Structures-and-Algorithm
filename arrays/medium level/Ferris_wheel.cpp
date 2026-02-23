#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n , x;

    cin >> n >> x;

    vector<int>arr;

    for(int i=0;i<n;i++){
        int num;
        cin >> num;

        arr.push_back(num);
    }

    sort(arr.begin() , arr.end());

    int count = 0;
    int l = 0 , r = n - 1;

    while(l <= r){

        if(arr[l] + arr[r] <= x){
            
            l++;
            r--;
        }

        else{

            r--;
        }

        count++;
    }

    cout << count;

    return 0;
}