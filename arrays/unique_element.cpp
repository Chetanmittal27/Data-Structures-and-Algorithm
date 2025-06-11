/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;

    int arr[n];

    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = 0;
    for(int i=0;i<n;i++){
        ans = arr[i] ^ ans;
    }

    cout<<"The unique element in array is:"<<ans;
    return 0;
}
*/

#include<iostream>
using namespace std;
int unique(int arr[] , int n){
    int hash[n] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        if(hash[i] == 1){
            return i;
        }
    }
}

int main(){
    int arr[] = {1,1,2,3,3,4,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << unique(arr , n);
    return 0;
}