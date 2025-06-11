#include<iostream>
using namespace std;

void all_factorials(int n){

    if (n == 0){
        return ;
    }

    int fact = n * all_factorials(n-1);
    
}