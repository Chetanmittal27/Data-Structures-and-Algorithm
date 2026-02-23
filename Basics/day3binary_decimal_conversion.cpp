// decimal to binary conversion.

#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    
    int result = 0;
    int power = 1;
    while (num > 0){
        int last_bit = num % 2;
        result = result + (power * last_bit);
        power *= 10;
        num = num / 2;
    }
    cout<<result;
}

// //Binary to Decimal.
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){

//     int n;
//     cin>>n;
    
//     int digit;
//     int i=0;

//     int ans=0;
//     while(n!=0){
//         digit= (n % 10);
        
//         if (digit==1){
//             ans=ans*pow(2,i);
//             n=n/10;
//             i++;
//         }

//         cout<<ans;
//     }
// }