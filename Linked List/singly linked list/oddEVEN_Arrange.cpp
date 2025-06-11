// Brute Force 
// TC = O(2n)
// SC = O(n)
/*
#include<iostream>
#include<vector>
#include<stack>
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
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

Node* odd_even(Node* head){
    vector<int>newArr;
    Node* temp = head;

    if(head == NULL || head -> next == NULL){
        return head;
    }

    while(temp != NULL && temp -> next != NULL){
        newArr.push_back(temp -> data);
        temp = temp -> next -> next;
    }
    if(temp){
        newArr.push_back(temp -> data);
    }

    temp = head -> next;
    while(temp != NULL && temp -> next != NULL){
        newArr.push_back(temp -> data);
        temp = temp -> next -> next;
    }
    if(temp){
        newArr.push_back(temp -> data);
    }

    temp = head;
    int i = 0;
    while(temp != NULL){
        temp -> data = newArr[i];
        temp = temp -> next;
        i++;
    }

    return head;
}

void printLL(Node* head){
    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
}

int main(){
    vector<int>arr = {1,3,4,2,5,6};
    Node* head = CreateLL(arr);
    printLL(head);

    cout << endl;

    head = odd_even(head);
    printLL(head);
}
*/


// Optimal approach
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
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

Node* odd_even(Node* head){

    if(head == NULL || head -> next == NULL) return head;
    
    Node* evenHead = head -> next;
    Node* odd = head;
    Node* even = head -> next;

    while(even != NULL && even -> next != NULL){
        odd -> next = odd -> next -> next;
        even -> next = even -> next -> next;

        odd = odd -> next;
        even = even -> next;
    }
    odd -> next = evenHead;

    return head;
}

void printLL(Node* head){
    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
}

int main(){
    vector<int>arr = {1,3,4,2,5,6};
    Node* head = CreateLL(arr);
    printLL(head);

    cout << endl;

    head = odd_even(head);
    printLL(head);
}