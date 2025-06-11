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

       Node(int d, Node* n) {
        data = d;
        next = n;
       }
};

Node* creation_SinglyLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

Node* insert_headNode(Node* head , int value){
    Node* temp = head;
    head = new Node(value);
    head -> next = temp;

    return head;
}

Node* insert_tailNode(Node* head , int value){
    if (head == NULL){
        return new Node(value);
    }
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = new Node(value);

    return head;
}

Node* insert_kthelement(Node* head, int k, int value) {
    if (k < 1) {
        // Invalid position
        return head;
    }

    if (head == NULL) {
        // Special case for empty list
        if (k == 1) {
            return new Node(value);
        } else {
            // k is out of bounds for an empty list
            return head;
        }
    }

    if (k == 1) {
        // Insert at the head
        return new Node(value, head);
    }

    int count = 1; // Start counting from the first node
    Node* temp = head;
    while (temp != NULL) {
        if (count == k-1) {
            // Insert new node after this node
            Node* x = new Node(value, temp->next);
            temp->next = x;
            return head;
        }
        temp = temp->next;
        count++;
    }

    // If we reach here, k is out of bounds
    return head;
}

void print(Node* head){
    while(head!=NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
}
int main(){
    vector<int>arr = {1,2,3,4,5,6};
    Node* head = creation_SinglyLL(arr);
    cout << "Original Linked List"<<endl;
    print(head);
    cout<<endl;

    head = insert_headNode(head , 10);
    cout << "Linked List after insertion" << endl;
    print(head);
    cout<<endl;

    head = insert_tailNode(head , 19);
    cout << "Linked list after insertion tail node" << endl;
    print(head);
    cout<<endl;

    head = insert_kthelement(head , 5 , 34);
    cout << "Linked list after inserting at kth positon" << endl;
    print(head);
    return 0;
}