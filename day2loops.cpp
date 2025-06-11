// #include<iostream>
// using namespace std;
// int main(){
//     int n,i=1;
//     cin>>n;
//     while (i<=n){
//         cout<<i<<endl;
//         i=i+1;
//     }
// }


// find sum of numbers from 1 to n
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i=1,sum=0;
//     cin>>n;

//     while(i<=n){
//         sum=sum+i;
//         i=i+1;
//     }
//     cout<<"The sum of numbers is:"<<sum;
// }



//Program to find sum of even numbers.
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i=0,sum=0;
//     cin>>n;

//     while(i<=n){
//         sum=sum+i;
//         i=i+2;
//     }
//     cout<<sum;
// }


// Program to check the given no. is prime or not.
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cin>>num;

//     int i=2;
//     while(i<num){
//         if (num%i==0){
//             cout<<"Not prime for "<<i<<endl;
//         }

//         else{
//             cout<<"prime for:"<<i<<endl;
//         }

//         i=i+1;
//     }
// }


// pattern printing.
//ques 1.
// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"No. of rows:";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }



//ques 2.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the no of rows:";
//     cin>>n;

//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }


//ques 3.
// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"Enter no. of rows:";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }


//ques 4.

// #include<iostream>
// using namespace std;
// int main(){
    
//     int n;
//     cin>>n;

//     for (int i=1;i<=n;i++){
//         for(int j=3*i-2;j<=3*i;j++){
//             cout<<j;

//         }
//         cout<<endl;
//     }
// }


//ques 5.
// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }


//ques 6.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int k=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//            cout<<k++ ; 
//         }
//         cout<<endl;
//     }
// }


// ques 7.
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the no. of rows:";
//     cin>>n;

//     for (int i=1;i<=n;i++){
//         for(int j=0;j<=i-1;j++){
//             cout<<i-j;
//         }
//         cout<<endl;
//     }
// }



//ques 8.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(char i=65;i<=n;i++){
//         for(char j=65;j<=n;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }


// ques 9.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int  i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             char ch='A'+j-1;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }



//ques 10.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=3*i-2;j<=3*i;j++){
//             char ch='A'+j-1;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }


//ques 11.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j+i-1;
//         }
//         cout<<endl;
//     }
// }


//ques12.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             char ch='A'+i-1;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }



//ques13.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int k=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             char ch='A'+k++ -1;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }


//ques14.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             char ch='A'+i+j-2;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }


//ques15.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             char ch='D'+j-i;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }


//q16.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=0;j<=n-1;j++){
//             char ch='A'+i+j-1;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }


//ques17.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if (j>n-i){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// }


//ques18.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>=i;j--){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


//ques19.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if (j>i-1){
//                 cout<<i;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }


//ques20.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if (j>n-i){
//                 cout<<i;
//             }

//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }



//ques21
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (j>n-i){
                cout<<j-n+i<<" ";
            }

            else{
                cout<<"  ";
            }
        }
        for(int j=1;j<i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}