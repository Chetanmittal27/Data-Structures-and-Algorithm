#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<pair<int , int>>v;

    for(int i=0;i<n;i++){
        int starting , ending;
        cin >> starting >> ending;

        v.push_back({starting , ending});
    }

    sort(v.begin() , v.end() , [](const pair<int,int>& p1 , const pair<int ,int>& p2){

        return p1.second < p2.second;
    });


    int count = 0;
    int start = 0 , end = 0;

    for(auto it : v){
        if(it.first >= end && it.second > end){
            count++;
            start = it.first;
            end = it.second;
        }
    }

    cout << count;
    
    return 0;
}