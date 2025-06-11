#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    int arr[] = {1,2,3,1,2,2};
    int n = sizeof(arr) / sizeof(int);

    unordered_map <int,int> m ;

    for(int i = 0;i<n;i++){
        m[arr[i]]++;
    }

    int maxfreq = 0;
    int maxfreqnumber = -1;

    for(int i = 0;i<n;i++){
        if (m[arr[i]] > maxfreq){
            maxfreq = m[arr[i]];
            maxfreqnumber = arr[i];
        }
    }

    cout<<maxfreqnumber;
    return 0;
}