#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sum(int arr[][4]){

    vector <int> v;
    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<4;j++){
            sum = sum + arr[i][j];
        }
        
        v.push_back(sum);
    }
    
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;

    int n = v.size();
    cout<<"largest row sum"<<endl;
    int max_it = *max_element(v.begin(),v.end());
    cout<<max_it<<endl;
    int index = distance(v.begin(), find(v.begin(),v.end(),max_it));
    cout<<"index of largest row sum"<<endl<<index ;
}

int main(){
    int arr[3][4] = {{10,20,30,50},{40,52,80,68},{54,86,74,95}};

    sum(arr);
}