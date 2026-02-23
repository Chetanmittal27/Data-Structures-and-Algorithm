#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    

    //Binary search.
    cout<<"Finding 5--> "<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<"Finding 6--> "<<binary_search(v.begin(),v.end(),6)<<endl;

    //Lower bound and upper bound.
    cout<<"lower bound --> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound--> "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a=3;
    int b=5;

    // max element
    cout<<"max--> "<<max(a,b)<<endl;

    // min element
    cout<<"min--> "<<min(a,b)<<endl;

    //swapping
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    //reversing string (palindrome)

    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"string after reversing--> "<<abcd<<endl;


    //rotate
    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"after rotating"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }


}