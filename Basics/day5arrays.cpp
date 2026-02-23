/*
#include<iostream>
using namespace std;
int main(){

    //declare
    int number[15];

    //accessing an array.
    cout << "Value at index 1:" << number[1] << endl;            // return the garbage value(any number)

    //initialising an array.
    int arr[4]={1 , 2 , 3 , 4};

    cout<<"Value at index 1:"<<arr[1]<<endl;

    int third[5]={2,4};
    for(int i=0;i<5;i++){
        cout<<third[i]<<endl;
    }

    cout<<"Everything is fine";

}
*/


// Arrays with functions.
/*
#include<iostream>
using namespace std;

void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int size;
    // cout<<"Enter the size of an array:";
    // cin>>size;

    int arr[ ]={1,2,3,4,5};
    size=sizeof(arr)/sizeof(int);
    print_array(arr,size);
}
*/


//Max and Min element of an array.
// #include<iostream>
// using namespace std;

// void max_min(int arr[],int size){
//     // take input an array
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     int small=arr[0];
//     int large=arr[0];

//     for(int i=0;i<size;i++){
//         if (small>arr[i]){
//             small=arr[i];
//         }
//     }

//     for(int i=0;i<size;i++){
//         if (large<arr[i]){
//             large=arr[i];
//         }
//     }

//     cout<<"minimum element in array is:"<<small<<endl;
//     cout<<"maximum element in array is:"<<large<<endl;
// }

// int main(){
//     int arr[5];
//     int size=5;

//     max_min(arr,size);
//     return 0;
// }



// updating an array.
// #include<iostream>
// using namespace std;
// void update(int arr[],int size ){
//     arr[0]=120;

//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<endl;
//     }
// }




// int main(){
//     int arr[3]={1,2,3};
//     int size=3;

//     cout<<"outside main function:"<<endl;
//     update(arr,size);

//     cout<<"inside main function"<<endl;

//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<endl;
//     }

//     return 0;
// }


// Linear Search in arrays.
// #include<iostream>
// using namespace std;
// int main(){

//     int arr[]={5,7,-2,10,22,-2,0,5,22,1,1};
//     int size=sizeof(arr)/sizeof(int);
//     int count=0;

//     for (int i=0;i<size;i++){
//         if (arr[i] == 1 ){
//             count+=1;
//         }
//     }
//     cout<<"1 is present "<<count<<" times";

//     return 0;
// }



// Reverse an array.
#include<iostream>
using namespace std;

void reverse_array(int arr[],int size){

    // Taking elements of array as input.
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    // Printing original array
    cout << "Original array " << endl ;
    
    for(int i=0;i<size;i++){
        cout << arr[i] << "\t";
    }
    cout<<endl;
    
    // Reversing the array.
    for (int i=0;i<size/2;i++){
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
    

    // Printing array after reversing.
    cout<<"Array after reversing "<<endl;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
}



int main(){
    int arr[7];
    int size=7;

    reverse_array(arr,size);
    return 0;
}