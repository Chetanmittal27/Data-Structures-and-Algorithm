#include<iostream>
using namespace std;

int power_calculation(int a , int b){

    if (b == 0){
        return 1;
    }

    else{
        return a * power_calculation(a , b - 1);
    }
}

int main(){
    int a, b;
    cin >> a >> b;

    cout << power_calculation(a , b);
    return 0;
}