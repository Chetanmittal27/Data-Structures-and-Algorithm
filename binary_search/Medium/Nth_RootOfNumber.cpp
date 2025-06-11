#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int Nth_Root(int N , int M){
    int low = 1;
    int high = M;

    while(low <= high){
        int mid = (low + high) / 2;

        if(pow(mid , N) == M){
            return mid;
        }

        else if(pow(mid , N) > M){
            high = mid - 1;
        }

        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    int N , M;
    cin >> N;
    cin >> M;

    cout << Nth_Root(N , M);
    return 0;
}