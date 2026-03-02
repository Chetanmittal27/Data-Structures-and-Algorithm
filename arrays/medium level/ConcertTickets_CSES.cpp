#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){

    int n , m;

    cin >> n >> m;

    map<int , int>mpp;

    for(int i=0;i<n;i++){
        int num;
        cin >> num;

        mpp[num]++;
    }

    vector<int>maxPrices;

    for(int j=0;j<m;j++){
        int n;
        cin >> n;
        maxPrices.push_back(n);
    }


    for(int j=0;j<m;j++){

        int val = -1;
        
        auto it = mpp.lower_bound(maxPrices[j]);

        if(it -> first == maxPrices[j]){
            val = it -> first;
        }

        else{
            if(it == mpp.begin()){
                val = -1;
            }

            else{
                --it;
                val = it -> first;
            }
        }

        cout << val << endl;

        if(val != -1){
            mpp[val]--;

            if(mpp[val] == 0){
                mpp.erase(val);
            }
        }
    }

    return 0;
}