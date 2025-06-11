// count elements of array using hash map.
/*
#include<iostream>
#include<map>
using namespace std;

int main(){
    int arr[] = {1,2,3,1,3,2,12};
    int n = sizeof(arr)/sizeof(arr[0]);

    map<int , int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}
*/


#include<iostream>
#include<map>
using namespace std;

int main(){
    char str[] = "abcdabeji";

    map<char , int> mpp;
    for(int i=0;i< sizeof(str) / sizeof(str[0])-1;i++){
        mpp[str[i]]++;                                               
    }

    for(auto it : mpp){
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}



// time complexity is : logn
// In map elements are printed in sorted order of elements of array.

// But if we use unordered map in place of map then elements are printed in the order in which they are in the array.
