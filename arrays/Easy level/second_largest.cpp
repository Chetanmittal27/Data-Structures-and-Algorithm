//To find second largest element in the array
//Brute force approach = first we sort the element in increasing order and then apply for loop

// Better approach
/*
#include<iostream>
using namespace std;

int second_largest(int arr[] , int n){
    int largest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            int temp = arr[i];
            arr[i] = largest;
            largest = temp;
        }
    }

    int snd_large = -1;
    for(int i=0;i<n;i++){
        if(arr[i] > snd_large && arr[i]!=largest){
            snd_large = arr[i];
        }
    }

    return snd_large;
}

int main(){
    int arr[] = {1,2,4,7,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Second_largest element is" << endl;
    cout << second_largest(arr , n);
    return 0;
}
*/

//Optimal approach
#include<iostream>
using namespace std;

int second_largest(int arr[] , int n){
    int largest = arr[0];
    int snd_large = -1;
    for(int i=1;i<n;i++){
        if(arr[i] > largest){
            snd_large = largest;
            largest = arr[i];
        }

        else if(arr[i] < largest && arr[i] > snd_large){
            snd_large = arr[i];
        }
    }

    return snd_large;
}

int main(){
    int arr[] = {1,2,4,7,7,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"second largest element in the array is"<<endl;
    cout<<second_largest(arr , n);
    return 0;
}