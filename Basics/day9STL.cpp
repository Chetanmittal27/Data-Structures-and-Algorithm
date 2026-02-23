// arrays
/*
#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,5> a={1,2,3,4,5};

    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }

    // at function
    cout<<"Element at index 2:"<<a.at(2)<<endl;

    // to check array is empty or not.
    cout<<"empty or not:"<<a.empty()<<endl;

    // to find first and last element of an array.
    cout<<"First element:"<<a.front()<<endl;
    cout<<"Second element:"<<a.back()<<endl;

    return 0;
}
*/





// Vectors
/*
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<"capacity--> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity--> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity--> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity--> "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"capacity--> "<<v.capacity()<<endl;
    

    // element at specific position.
    cout<<"element at position 2-->"<<v.at(2)<<endl;

    // first and last element.
    cout<<"first element:"<<v.front()<<endl<<"last element:"<<v.back()<<endl;

    // printing vector before pop.
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<endl;
    }

    v.pop_back();
    
    // printing vector after pop.
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<endl;


    // vector before clear.
    cout<<"size before clear:"<<v.size()<<endl;

    v.clear();

    cout<<"size after clear:"<<v.size()<<endl;

    }

}
*/



// Deque.
/*
#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<endl;
    }

    // d.pop_back();
    // for(int i:d){
    //     cout<<i<<endl;
    // }

    cout<<"print first index element-->"<<d.at(1)<<endl;

    cout<<"empty or not--> "<<d.empty()<<endl;



    //erase function.
    cout<<"befor erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase "<<d.size()<<endl;

}
*/



// Lists
/*
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }

    l.erase(l.begin());

    for(int i:l){
        cout<<i<<" ";
    }

    cout<<endl;
    list<int> n(5,100);
    for(int i:n){
        cout<<i<<" ";
    }
}
*/



// Stack
/*
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("chetan");
    s.push("mittal");
    s.push("kumar");


    cout<<"Top element--> "<< s.top()<<endl;

    s.pop();
    cout<<"Top element--> "<<s.top()<<endl;

    cout<<"size of stack:"<<s.size()<<endl;


    cout<<"empty or not-->"<< s.empty()<<endl;


}
*/

// queue
/*
#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("chetan");
    q.push("mittal");
    q.push("chintu");

    cout<<"First element--> "<<q.front()<<endl;
    cout<<"before pop:"<<q.size()<<endl;
    
    q.pop();

    cout<<"First element--> "<<q.front()<<endl;
    cout<<"after pop:"<<q.size()<<endl;
}
*/



// Sets
/*
#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(4);
    s.insert(1);
    s.insert(6);
    s.insert(4);
    s.insert(4);
    s.insert(0);
    s.insert(6);
    s.insert(0);

    for(int i:s){
        cout<<i<<" ";
    }
    
    cout<<endl;
    s.erase(s.begin());
    
    for(int i:s){
        cout<<i<<" ";
    }
    
    cout<<endl;
    cout<<s.count(4)<<endl;
    cout<<s.count(-3)<<endl;

    set<int>::iterator itr = s.find(5);

    for(auto it=itr;it!=s.end();it++){
        cout<<it<<" ";
    }
    cout<<endl;
}
*/



// Map
#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int ,string> m;

    m[1]="chetan";
    m[2]="mittal";
    m[13]="chintu";

    for(auto i:m){
        cout<<i.first<<endl;
    }


    m.insert({5,"bheem"});

    for(auto i:m){
        cout<<i.first<<endl;
    }


    cout<<"finding 13--> "<<m.count(13)<<endl;
    cout<<"finding -13--> "<<m.count(-13)<<endl;

    m.erase(13);
    cout<<"after erase "<<endl;
    for(auto i:m){
        cout<<i.first<<endl;
    }


    auto it=m.find(5);

    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}