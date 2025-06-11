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

int search_Element(Node* head , int k){
    while(head != NULL){
        if(head -> data == k){
            return 1;
        }
        head = head -> next;
    }
    return 0;
}

int main(){
    vector<int>arr = {2,3,5,7};
    int k;
    cin >> k;
    Node* head = CreateLL(arr);
    cout << search_Element(head , k);
    return 0;
}