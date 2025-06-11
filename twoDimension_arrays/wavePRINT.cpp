#include<iostream>
using namespace std;

void wave_print(int arr[3][4]){

    for(int cols = 0;cols<4;cols++){

        if (cols % 2 == 0){
            for(int row = 0 ;row<3;row++){
                cout<<arr[row][cols]<<" ";
            }
        }

        if (cols % 2 !=0){
            for(int  row =2; row>=0 && row<3;row--){
                cout<<arr[row][cols]<<" ";
            }
        }
    }
}

int main(){
    int arr[3][4] = {2,1,4,8,9,6,4,7,12,45,26,54};

    wave_print(arr);
    return 0;
}
