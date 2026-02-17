#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int n , m , k;
    cin >> n >> m >> k;

    vector<int>desired;

    for(int i=0;i<n;i++){
        int val;
        cin >> val;

        desired.push_back(val);
    }

    vector<int>apartment;

    for(int j=0;j<m;j++){
        int s;
        cin >> s;
        apartment.push_back(s);
    }

    sort(desired.begin() , desired.end());
    sort(apartment.begin() , apartment.end());

    int i = 0 , j = 0;
    int count = 0;

    while(i < n && j < m){
        if((apartment[j] >= desired[i]-k)  &&  (apartment[j] <= desired[i] + k)){
            count++;
            i++;
            j++;
        }

        else if(apartment[j] < desired[i] - k){
            j++;
        }

        else{
            i++;
        }
    }

    cout << count;

    return 0;
}