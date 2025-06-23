#include<iostream>
using namespace std;

int SumOfNumbers(int n){
    
    if (n == 0){
        return 0;
    }

    else{
        int sum = n + SumOfNumbers(n-1);
        return sum;
    }
}

int main(){
    int n;
    cin >> n;

    cout<<"Sum of numbers is"<<endl;
    cout<<SumOfNumbers(n);
    return 0;
}