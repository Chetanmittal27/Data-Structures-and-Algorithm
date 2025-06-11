#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int d){
        data = d;
        next = nullptr;
        back = nullptr;
    }
};

Node* CreationDLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        temp -> back = mover;
        mover = mover -> next;
    }
    return head;
}

Node* DeleteHead(Node* head){
    if(head == NULL || head -> next == NULL) return head;

    else{
        Node* temp = head;
        head = head -> next;
        delete(temp);
        
        if(head){
            head -> back = NULL;
        }
        return head;
    }
}

Node* DeleteTail(Node* head){
    if(head == NULL){
        return NULL;
    }
    if(head -> next == NULL){
        delete head;
        return NULL;
    }

    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    Node* x = temp -> back;
    x -> next = nullptr;
    temp -> back = nullptr;

    delete temp;
    return head;
}

Node* Delete_KthNode(Node* head , int k){
    if(head == NULL) return NULL;

    int count = 0;
    Node* temp = head;

    while(temp != NULL){
        count++;

        if(count == k) break;
        temp = temp -> next;
    }
    Node* prev = temp -> back;
    Node* front = temp -> next;

    if(prev == NULL && front == NULL){
        delete temp;
        return NULL;
    }

    if(prev == NULL){
        return DeleteHead(head);
    }

    if(front == NULL){
        return DeleteTail(head);
    }

    prev -> next = front;
    temp -> next = nullptr;
    temp -> back = nullptr;
    delete temp;

    return head;
}

Node* InsertionAtHead(Node* head , int ele){
    if(head == NULL) return new Node(ele);

    Node* temp = head;
    head = new Node(ele);
    head -> next = temp;
    temp -> back = head;

    return head;
}

Node* InsertionAtTail(Node* head , int ele){
    if(head == NULL) return new Node(ele);

    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }

    Node* x = new Node(ele);
    temp -> next = x;
    x -> back = temp;
    return head;
}

Node* InsertAt_kthPosition(Node* head, int ele, int k) {
    if (head == NULL) return new Node(ele);  // Case 1: If list is empty

    if (k == 1) {  // Case 2: Insert at head
        return InsertionAtHead(head, ele);
    }

    int count = 0;
    Node* temp = head;

    while (temp != NULL) {
        count++;

        if (count == k) break;
        temp = temp->next;
    }

    if (temp == NULL) return head;  // Case 3: k exceeds list size

    Node* x = new Node(ele); 
    Node* prev = temp->back;  // Ensure temp is valid before accessing back pointer

    if (prev) {
        prev->next = x;
        x->back = prev;
    }

    x->next = temp;
    temp->back = x;

    return head;
}

void printDLL(Node* head){
    if(head == NULL) return;
    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
}

int main(){
    vector<int>arr = {1,2,3,4,5};
    Node* head = CreationDLL(arr);
    printDLL(head);
    cout << endl;

    // head = DeleteHead(head);
    // printDLL(head);

    head = DeleteTail(head);
    printDLL(head);
    cout << endl;

    head = InsertionAtHead(head , 8);
    printDLL(head);
    cout << endl;

    head = InsertionAtTail(head , 10);
    printDLL(head);
    cout << endl;


    head = Delete_KthNode(head , 4);
    printDLL(head);
    cout << endl;

    head = InsertAt_kthPosition(head , 23 , 4);
    printDLL(head);
    return 0;
}