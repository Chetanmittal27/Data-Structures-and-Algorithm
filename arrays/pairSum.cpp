#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int> > pair_sum(vector<int> &arr,int s){
    vector<vector<int> >ans;
    int size = arr.size();
    for(int i = 0;i<size;i++){
        for(int j = i+1;j<size;j++){
            if (arr[i] + arr[j] == s){
                vector<int>temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));

                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<int>arr = {1,2,3,4,5};
    int s;
    cin>>s;

    vector<vector<int>>result = pair_sum(arr,s);
    for(const auto& pair : result){
        cout<<pair[0]<<" "<<pair[1]<<endl;
    }
    return 0;
}