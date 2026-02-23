#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    

    // Creation
    unordered_map<string,int> m;

    // Insertion

    // 1
    pair<string , int > p = make_pair("chetan" , 1);
    m . insert(p);

    // 2
    pair<string , int> q("mittal" , 2);
    m . insert(q);

    // 3
    m["chintu"] = 3;

    m["chintu"] = 5;

    // Searching
    cout<<m["mittal"]<<endl;
    cout<<m["chintu"]<<endl;
    cout<<m.at("chetan")<<endl;
 
    // cout<<m.at("unknownkey");
    cout<<m["unknownkey"]<<endl;
    cout<<m.at("unknownkey")<<endl;

    // size
    cout<<m.size() <<endl;

    // to check presence
    cout<<m.count("mera")<<endl;
    cout<<m.count("chetan")<<endl;



    // erase
    m.erase("unknownkey");
    cout<<m.size()<<endl;


   for(auto i : m){
    cout<<i.first<<" "<<i.second<<endl;
   }
}