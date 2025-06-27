#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
      int data;
      Node* next;
      Node* prev;

    public:
      Node(int d){
        data = d;
        next = nullptr;
        prev = nullptr;
      }
};

Node* CreateDLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        temp -> prev = mover;
        mover = temp;
    }

    return head;
}

Node* deleteHead(Node* head){
    if(head == NULL){
        return head;
    }
    Node* temp = head;
    head = head -> next;
    head -> prev = nullptr;
    delete temp;
    return head;
}

Node* deleteTail(Node* head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node* temp = head;
    while(temp -> next -> next != NULL){
        temp = temp -> next;
    }
    // temp -> next -> prev = NULL;
    delete temp -> next;
    temp -> next = NULL;

    return head;
}

Node* deletekthElement(Node* head , int k){
    if (head == NULL){
        return head;
    }

    if(k == 1){
        Node* temp = head;
        head = head -> next;
        head -> prev = nullptr;
        delete temp;
        return head;
    }
    
}
void print(Node* head){
    while(head!=NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
}

int main(){
    vector<int>arr = {1,2,3,4,5};
    Node* head = CreateDLL(arr);
    print(head);
    cout << endl;

    // cout << "After deleting head node" << endl;
    // head = deleteHead(head);
    // print(head);
    // cout<< endl;

    cout << "After deleting tail node" << endl;
    head = deleteTail(head);
    print(head);
    return 0;
}