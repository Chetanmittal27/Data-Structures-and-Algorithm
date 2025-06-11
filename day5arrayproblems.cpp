// Ques1. Swap alternate numbers.
/*
#include<iostream>
using namespace std;
void alternate_nos(int arr[],int size){
    
    cout<<"Original array:"<<endl;
    for (int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

    for(int i=0;i<size;i=i+2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    
    cout<<"Array after swaping"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
}

int main( ){
    int arr[5]={1,2,7,8,5};
    int size=5;

    alternate_nos(arr,size);
    return 0;
}
*/


// Find unique number in the array.
// method 1
/*
#include<iostream>
using namespace std;

int unique_no(int ARR[ ],int N){
    for(int i=0;i<N;i++){
        cout<<ARR[i]<<"\t";
    }
    cout<<endl;

    int count=0;
    // Finding unique element.
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){

            if (ARR[j] == ARR[i]){
                count+=1;
            }
        }
        
        for (int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if ((ARR[j]==ARR[i])  && count==1){
                    return ARR[j];
                }
            }
        }
    }
}


int main(){
    int arr[]={10,15,12,15,7,10,12};
    int size=7;

    cout<<unique_no(arr,size);
    return 0;
}


// method 2
#include<iostream>
using namespace std;

int unique_no (int arr[ ], int size){
    
    int result=0;
    for(int i=0;i<size;i++){
        result = result ^ arr[i];
    }

    return result;
}



int main(){
    int arr[]={3,7,2,4,2,7,3};
    int size=7;
    

    cout<<unique_no(arr,size);
    return 0;
}
*/


// Leetcode problem 1207:Unique number of occurences.
// #include<iostream>
// using namespace std;





//Code studio -20: Duplicates in array.
/*
#include<iostream>
using namespace std;

int duplicate(int arr[],int size){
    int ans=0;

    for (int i=0;i<size;i++){
        ans=ans ^ arr[i];
    }

    for (int i=1;i<size;i++){
        ans=ans ^ i;
    }

    return ans;
}

int main(){
    int arr[]={6,3,1,5,4,3,2};
    int size=sizeof(arr)/sizeof(int);

    cout<<duplicate(arr,size);
    return 0;
}
*/


// Intersection of two arrays (codestudio)

#include<iostream>
using namespace std;

int intersection(int arr1[],int arr2[],int n1,int n2){
    
    int arr[]


    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if (arr1[i] == arr2[j]){
                
                i=i+1;
            }
        }
    }
}