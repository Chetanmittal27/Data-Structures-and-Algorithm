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

Node* Insert_Head(Node* head , int ele){
    if(head == NULL){
        return new Node(ele);
    }
    Node* temp = head;
    head = new Node(ele);
    head -> next = temp;
    return head;
}

Node* Insert_Tail(Node* head , int ele){
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    Node* Nnode = new Node(ele);
    temp -> next = Nnode;
    Nnode -> back = temp;

    return head;
}

Node* Insert_Kth(Node* head , int ele , int k){
    if(head == NULL){
        return new Node(ele);
    }

    if(k == 1){
        Node* temp = head;
        head = new Node(ele);
        head -> next = temp;
        temp -> back = head;
        return head;
    }

    int cnt = 1;
    Node* temp = head;
    while(temp != NULL){
        if(cnt == k){
            break;
        }
        temp = temp -> next;
        cnt++;
    }
    Node* prev = temp -> back;
    Node* x = new Node(ele);
    prev -> next = x;
    x -> next = temp;

    return head;
}

void printDLL(Node* head){
    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
}

int main(){
    vector<int>arr = {1,3,2,4,5};
    Node* head = CreateDLL(arr);
    printDLL(head);
    cout << endl;

    head = Insert_Head(head , 12);
    printDLL(head);

    cout << endl;
    
    head = Insert_Tail(head , 13);
    printDLL(head);
    
    cout << endl;

    head = Insert_Kth(head , 15 , 4);
    printDLL(head);
    return 0;
}