// Brute force approach
/*
#include<iostream>
#include<set>
using namespace std;

void unionOfArrays(int arr1[] , int arr2[] , int n1 , int n2){
    set<int>s;
    for(int i=0;i<n1;i++){
        s.insert(arr1[i]);
    }

    for(int i=0;i<n2;i++){
        s.insert(arr2[i]);
    }
    
    int n = s.size();
    int arr[n];
    int i=0;
    for(auto it : s){
        arr[i] = it;
        i++;
    } 

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr1[] = {1,1,2,3,4,5};
    int arr2[] = {2,3,4,4,5,6};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    unionOfArrays(arr1 , arr2 , n1 , n2);
    return 0;
}
*/

// Optimal approach

#include<iostream>
#include<vector>
using namespace std;

void unionOfArrays(int arr1[] , int arr2[] , int n1 , int n2){
    int i=0;
    int j=0;
    vector<int>unionArr;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }

        else{
            if(arr1[i] >= arr2[j]){
                if(unionArr.size() == 0 || unionArr.back()!=arr2[j]){
                    unionArr.push_back(arr2[j]);
                }
                j++;
            }
        }

    }

    while(j<n2){
        if(unionArr.size() == 0 || unionArr.back()!=arr2[j]){
            unionArr.push_back(arr2[j]);
        }
        j++;
    }

    for(int i=0;i<unionArr.size();i++){
        cout<<unionArr[i] << " ";
    }
}

int main(){
    int arr1[] = {1,1,2,3,4,5};
    int arr2[] = {2,3,4,4,5,6};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    unionOfArrays(arr1 , arr2 , n1 , n2);
    return 0;
}

