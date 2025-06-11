#include<iostream>
using namespace std;

int CubicSeries_Sum (int n){

    if (n == 0){
        return 0;
    }

    else {
        return (n * n * n) + CubicSeries_Sum(n - 1);
    }
}

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin >> n;

    cout<<"sum of cubic series upto n"<<endl;
    cout<<CubicSeries_Sum(n);
    
    return 0;
}