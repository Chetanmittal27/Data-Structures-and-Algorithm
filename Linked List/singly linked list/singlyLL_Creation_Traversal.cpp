#include<iostream>
#include<vector>

using namespace std;

class Node{
    public:
       int data;
       Node* next;

    public:
       Node(int d){
        data = d;
        next = nullptr;
       }
};

Node* CreateLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }

    return head;
}

void print(Node* head){
    while(head!=NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
}
int main(){
    vector<int>arr = {1,2,3,4,5};
    Node* head = CreateLL(arr);
    print(head);
    return 0;
}
