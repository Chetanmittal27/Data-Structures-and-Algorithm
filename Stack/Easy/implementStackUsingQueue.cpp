#include<iostream>
#include<queue>
using namespace std;

class stack{
    public:
       queue<int>q;

    public:
    
    void push(int x){
        q.push(x);

        int size = q.size();

        for(int i=0;i<size-1;i++){
            q.push(q.front());
            q.pop();
        }
    }

    int top(){
        if(!q.empty()){
            return q.front();
        }

        else{
            return -1;
        }
    }

    void pop(){
        if(q.empty()){
            cout << "Underflow" << endl;
        }

        else{
            q.pop();
        }
    }

    bool isempty(){
        return q.empty();
    }


};


int main(){
    stack s;
    s.push(3);
    s.push(10);
    s.push(4);
    cout << s.top() << endl;
    s.push(7);
    s.pop();
    cout << s.top();

    return 0;
}