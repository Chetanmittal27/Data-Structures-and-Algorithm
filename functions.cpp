
// FUNCTIONS

//pow(a,b)
// #include<iostream>
// using namespace std;

// int power(int a,int b){
//     int pow=1;

//     for(int i=1;i<=b;i++){
//         pow=pow*a;
//     }
//     return pow;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;

//     cout<<power(a,b)<<endl;
// }


// To check number is even or odd.
// Method 1.
// #include<iostream>
// using namespace std;
// void even_odd(int num){

//     if (num % 2 == 0){
//         cout<<"It is an even no."<<endl;
//     }

//     else{
//         cout<<"It is an odd no."<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;

//     even_odd(n);
// }

// Method 2.
/*
#include<iostream>
using namespace std;

bool iseven(int num){
    // for odd
    if (num & 1){
        return 0;
    }
    
    //for even
    return 1;
}

int main(){
    int n;
    cin>>n;

    if (iseven(n)){
        cout<<"Number is even"<<endl;
    }

    else{
        cout<<"Number is odd";
    }
}
*/



// Program to find nCr.

// #include<iostream>
// using namespace std;
// int factorial(int n){

//     int fact=1;
//     for(int i=n;i>0;i--){
//         fact=fact*i;
//     }

//     return fact;
// }

// int nCr(int n,int r){

//     int nume= factorial(n);
//     int deno= factorial(r) * factorial(n-r);

//     int combination= nume / deno;
//     return combination;
// }

// int main(){
//     int n,r;
//     cin>>n>>r;

//     cout<<nCr(n,r);
// }



// Program to print counting.
// #include<iostream>
// using namespace std;

// void counting(int n){
//     for(int i=0;i<=n;i++){
//         cout<<i<<endl;
//     }
// }

// int main(){
//     int num;
//     cin>>num;
//     cout<<"counting"<<endl;
//     counting (num);
// }


// To check the number is prime or not.
/*
#include<iostream>
using namespace std;

bool isprime(int num){

    int ischeck = 1;

    for(int i=2;i<num;i++){
        if (num % i == 0){
            ischeck=0;
            break;
        }

    }
    return ischeck ;
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    if (isprime (n)){
        cout<<"Prime no.";
    }

    else{
        cout<<"Not a prime no.";
    }
}
*/


// find nth term of an A.P

// #include<iostream>
// using namespace std;

// int nth_term(int n){

//     int ap= 3 * n + 7 ;
//     return ap;
// }

// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;

//     cout<<nth_term(n);
// }



// Program to count no. of 1 bits in two numbers a and b.
/*
#include<iostream>
using namespace std;

int numberofbits(int a){
    int count=0;
        while (a){
            count=count+ (a & 1);
            a = a >> 1 ;
        }
    return count;

}

int total_bits(int a,int b){
    int total=numberofbits(a)+numberofbits(b);

    return total;
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<total_bits(a,b);
}
*/


//program to return nth term of fibonacci series.

// #include<iostream>
// using namespace std;

// int fibonacci(int num){
//     int a=0;
//     int b=1;

//     for(int i=3;i<=num;i++){
//         b=a+b;
//         a=b-a;
//     }

//     return b;
// }

// int main(){
//     int n;
//     cout<<"Enter which term to display:";
//     cin>>n;

//     cout<<fibonacci(n);
// }



#include<iostream>
using namespace std;

void dummy(int n=10){
    n++;
    cout<<n;
}

int main(){
    int n;
    cin>>n;
    dummy(n);
}