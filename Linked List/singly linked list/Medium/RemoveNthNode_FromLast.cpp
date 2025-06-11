/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.
*/

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

Node* createLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = mover -> next;
    }
    return head;
}

Node* removeNthNode(Node* head , int n){
    if(head == NULL) return head;

    if(head -> next == NULL){
        delete head;
        return NULL;
    }

    int lengthOfLinkedList = 0;
    Node* temp = head;
    while(temp != NULL){
        lengthOfLinkedList++;
        temp = temp -> next;
    }

    temp = head;

    if(lengthOfLinkedList - n == 0){
        Node* newTemp = head;
        head = head -> next;
        delete newTemp;
        return head;
    }

    int cnt = 0;
    while(temp != NULL){
        cnt++;

        if(cnt == lengthOfLinkedList - n){
            Node* x = temp -> next;
            temp -> next = temp -> next -> next;
            delete x;
        }
        temp = temp -> next;
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
    vector<int>arr = {1,2,3,4,5};
    Node* head = createLL(arr);

    head = removeNthNode(head , 4);
    printLL(head);
    return 0;

}