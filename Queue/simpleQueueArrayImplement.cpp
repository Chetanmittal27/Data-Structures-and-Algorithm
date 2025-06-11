#include<iostream>
using namespace std;

class Queues{
    public:
        int size;
        int* arr;
        int front;
        int rear;
    
    public:
        Queues(int n){
            size = n;
            arr = new int[size];
            front = -1;
            rear = -1;
        }
    
    void Enqueue(int element){
        if(front == 0 && rear == size - 1){
            cout << "Overflow, Queue is full" << endl;
        }
        rear = rear + 1;
        arr[rear] = element;
    }

    int dequeue(){
        if(front == rear){
            cout << "queue is empty";
        }

        int val = arr[front];
        front++;

        return val;
    }

    void traverse(){
        if(front == -1  && rear == -1){
            cout << "Queue is empty" << endl;
        }

        for(int i=0;i<rear;i++){
            cout << arr[i] << " ";
        }
    }
};

int main(){
    Queues q(8);

    q.Enqueue(2);
    q.Enqueue(5);
    q.Enqueue(10);
    q.Enqueue(7);
    q.Enqueue(16);
    q.Enqueue(80);

    cout << "Elements in queue are " << endl;
    q.traverse();
    cout << endl;

    cout << "deleted element is" << endl;
}