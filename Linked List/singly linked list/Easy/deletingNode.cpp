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

Node* CreationofSinglyLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1;i<arr.size();i++){
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

Node* Delete_HeadNode(Node* head){
    if(head == NULL){
        return head;
    }
    Node* temp = head;
    head = head -> next;
    delete temp;
    return head;
}

Node* Delete_TailNode(Node* head){
    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node* temp = head;
    while(temp -> next -> next != NULL){
        temp = temp -> next;
    }
    delete(temp -> next);
    temp -> next = nullptr;

    return head;
}

Node* Delete_kthelement(Node* head , int k){
    if(head == NULL){
        return head;
    }

    if(k==1){
        Node* temp = head;
        head = head -> next;
        delete temp;
        return head;
    }
    int count = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp!=NULL){
        count++;
        if(count == k){
            prev -> next = prev -> next -> next;
            break;
        }
        prev = temp;
        temp = temp -> next;
    }
    return head;

}
int main(){
    vector<int>arr = {1,2,3,4,5,6,9};
    Node* head = CreationofSinglyLL(arr);

    print(head);
    cout<<endl;

    // cout << "Head node after deletion of previous head node : " << Delete_HeadNode(head);
    // cout << "node after deletion of tail node : " << Delete_TailNode(head) << endl;
    cout << "node after deletion of kth node : " << Delete_kthelement(head , 4) << endl;
    print(head);
    return 0;
}