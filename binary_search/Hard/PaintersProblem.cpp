#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
#include<climits>
using namespace std;


int PaintedBoardsCheck(vector<int>&Boards , int b){
    int count = 1;
    int sum = 0;

    for(int i = 0;i<Boards.size();i++){
        if(Boards[i] > b){
            return INT_MAX;
        }

        else if(sum + Boards[i] > b){
            count++;
            sum = Boards[i];
        }

        else{
            sum = sum + Boards[i];
        }
    }
    return count;
}

int Painters_Partition_Problem(vector<int>&Boards , int k){
    int low = *min_element(Boards.begin() , Boards.end());
    int high = accumulate(Boards.begin() , Boards.end() , 0);
    int ans = INT_MAX;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(PaintedBoardsCheck(Boards , mid) == k){
            ans = mid;
            high = mid - 1;
        }

        else if(PaintedBoardsCheck(Boards , mid) > k){
            low = mid + 1;
        }

        else{
            high = mid - 1;
        }
    }
    return ans;
}


int main(){
    vector<int>Boards = {10,20,30,40};
    int k = 2;

    cout << Painters_Partition_Problem(Boards , k);
    return 0;
}