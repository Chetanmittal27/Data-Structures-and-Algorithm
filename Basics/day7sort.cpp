// Selection Sort.
/*
#include<iostream>
using namespace  std;

void sorting(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_index=i;

        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[min_index]){
                min_index=j;
            }   
        }
        swap(arr[min_index],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

}




int main(){
    int arr[]={64,25,12,22,11};
    int n=5;
    sorting(arr,n);
    return 0;
}
*/


//Bubble Sort
#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if (arr[j+1]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}


int main(){
    int n=6;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubble_sort(arr,n);
    return 0;
}