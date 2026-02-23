#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n){

    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for( ;j>=0;j--){

            if(temp < arr[j]){
                arr[j+1] = arr[j];
            }

            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){
    int arr[7]={10,1,7,4,8,2,11};
    int n=7;

    insertion_sort(arr,n);
    return 0;
}