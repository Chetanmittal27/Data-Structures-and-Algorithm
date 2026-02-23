// #include<iostream>
// using namespace std;

// int main(){
//     int a=4;
//     int b=6;

//     cout<<"a&b="<<(a&b) << endl;
//     cout<<"a|b="<<(a|b) << endl;
//     cout<<"~a="<<~a << endl;
//     cout<<"a^b="<<(a^b) << endl;

//     cout<<"17>>1="<<(17>>1)<<endl;
//     cout<<"17>>2="<<(17>>2)<<endl;
//     cout<<"19<<1="<<(19<<1)<<endl;
//     cout<<"21<<2="<<(21<<2)<<endl;


//     int i=7;
//     cout<<(++i)<<endl;
//     cout<<(i++)<<endl;
//     cout<<(i--)<<endl;
//     cout<<(--i)<<endl;
// }



// #include<iostream>
// using namespace std;
// int main(){

//     int a,b=1;
//     a=10;
//     if(++a){
//         cout<<b;
//     }
//     else{
//         cout<<(++b);
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){

//     int a=1;
//     int b=2;
//     if(a-- >0 && ++b>2){
//         cout<<"Stage 1-Inside If"<<endl;
//     }

//     else{
//         cout<<"stage 2-Inside If"<<endl;
//     }

//     cout<<a<<" "<<b<<endl;
// }


// #include<iostream>
// using namespace std;
// int main(){

//     int num=3;
//     cout<<(25* (++num));
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a=1;
//     int b=a++;
//     int c=++a;
//     cout<<b;
//     cout<<c;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;

//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }

//     cout<<sum;
// }



//Fibonacci Series
// #include<iostream>
// using namespace std;
// int main(){
    
//     int n;
//     cout<<"Enter the number of terms to print:";
//     cin>>n;

//     int a=0;
//     int b=1;
//     cout<<a<<"\t"<<b<<"\t";


//     for(int i=2;i<n;i++){
//         b=a+b;
//         a=b-a;
//         cout<<b<<"\t";
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){

//     for(int i=0;i<=5;i++){
//         cout<<i<<" ";
//         i++;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){

//     for(int i=0;i<=5;i--){
//         cout<<i<<" ";
//         i++;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){

//     for(int i=0;i<=15;i+=2){
//         cout<<i<<" ";

//         if (i&1){
//             continue;
//         }
//         i++;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){

//     for(int i=0;i<5;i++){
//         for(int j=i;j<=5;j++){
//             if(i+j==10){
//                 break;
//             }

//             cout<<i<<" "<<j<<endl;
//         }
//     }
// }


// leetcode problem 1281.

/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int sum=0;
    int product=1;
    int result;

    while (n>0){
        int c=(n%10);
        sum=sum+c;
        product=product*c;
        n=n/10;
    }

    result=product-sum;
    cout<<result<<endl;
}
*/

