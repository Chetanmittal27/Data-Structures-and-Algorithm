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

Node* CreateDLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        temp -> back = mover;
        mover = temp;
    }
    return head;
}

int lengthDLL(Node* head){
    int cnt = 0;
    while(head != NULL){
        cnt++;
        head = head -> next;
    }
    return cnt;
}

void printLL(Node* head){
    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
}

int main(){
    vector<int>arr = {1,3,2,4,5};
    Node* head = CreateDLL(arr);

    printLL(head);
    cout << endl;
    cout << lengthDLL(head);
    return 0;
}