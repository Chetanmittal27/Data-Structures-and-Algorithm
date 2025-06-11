#include<iostream>
#include<vector>
using namespace std;

void intersectionOfArrays(int A[] , int B[] , int n1 , int n2){
    int i = 0;
    int j = 0;
    vector<int>intersectionArray;
    while(i<n1 && j<n2){
        if(A[i] == B[j]){
            if(intersectionArray.size() == 0 || intersectionArray.back() <= A[i]){
                intersectionArray.push_back(A[i]);
            }
            i++;
            j++;
        }

        else{
            i++;
        }
    }

    for(int i=0;i<intersectionArray.size();i++){
        cout << intersectionArray[i] << " ";
    }
}

int main(){
    int A[] = {1,2,2,3,3,4,5,6};
    int B[] ={2,3,3,5,6,6,7};
    int n1 = sizeof(A)/sizeof(A[0]);
    int n2 = sizeof(B)/sizeof(B[0]);

    intersectionOfArrays(A ,B , n1 , n2);
    return 0;
}