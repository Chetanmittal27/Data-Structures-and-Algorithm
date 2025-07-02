#include<iostream>
using namespace std;

class Stack{
    public:
       int top;
       int* arr;
       int size;

    public:
       Stack(int s){
        size = s;
        top = -1;
        arr = new int[size];
       }

    
    void push(int x){
        if(top >= size){
            cout << "Stack overflow";
        }

        else{
            top = top + 1;
            arr[top] = x;
        }
    }

    void pop(){
        if(top == -1){
            cout << "Stack Underflow" << endl;
        }

        else{
            top--;
        }
    }

    int peek(){
        if(top == -1){
            cout << "Stack underflow" << endl;
        }

        return arr[top];
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    int stackSize(){
        if(top == -1) return 0;
        else if(top >= size){
            cout << "Stack overflow";
        }
        else{
            return top + 1;
        }
    }
};

int main(){
    Stack st(5);

    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.peek() << endl;
    st.push(1);
    st.pop();
    cout << st.peek() << endl;

    st.push(5);
    cout << st.peek() << endl;
    st.push(6);
    st.push(7);
    cout << st.stackSize() << endl;
}