#include<iostream>
using namespace std;

class Queue{
    public:
    int size;
    int* arr;
    int front;
    int rear;

    public:
    Queue(int s){
        size = s;
        front = -1;
        rear = -1;
        arr = new int[size];
    }


    void enqueue(int x){
        if(rear == size - 1){
            cout << "Overflow" << endl;
        }

        else if(front == -1 && rear == -1){
            front = rear = 0;
            arr[rear] = x;
        }

        else{
            rear++;
            arr[rear] = x;
        }
    }


    void dequeue(){
        if(front == -1 && rear == -1){
            cout << "Underflow" << endl;
        }

        else if(front == rear){
            front = rear = -1;
        }

        else{
            front++;
        }
    }

    int peek(){
        if(front == -1 && rear == -1){
            cout << "Queue Empty";
        }

        else{
            return arr[front];
        }
    }
};

int main(){
    Queue q(5);

    
}