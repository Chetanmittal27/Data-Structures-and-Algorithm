#include<iostream>
#include<vector>
using namespace std;

long long perfect_square(long long n){
    int low = 1;
    int high = n;
    long long ans = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if((mid * mid) == n){
            return mid;
        }

        else if((mid * mid) > n){
            high = mid - 1;
        }

        else{
            ans = mid;
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    long long n;
    cin >> n;

    cout << perfect_square(n);
    return 0;
}