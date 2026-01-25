#include<iostream>
using namespace std;

int func(int num){
    
    int ans = 1;
    int i = 2;

    while(num != 1 && i <= num/2){

        if(num % i == 0){
            ans = ans * i;
            num = num / i;
        }

        else{
            i++;
        }
    }

    if(num != 1){
        return num;
    }

    return ans;
}


int main(){
    int num;
    cin >> num;

    cout << "LCM of " << num << " is " << func(num) << endl;
}