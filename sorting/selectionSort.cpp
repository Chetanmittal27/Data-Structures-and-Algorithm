#include<iostream>
#include<algorithm>
using namespace std;
void selection_sort(int arr[] , int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i;j<n;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i] , arr[min]);
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {13,46,24,52,20,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr , n);
    return 0;
}