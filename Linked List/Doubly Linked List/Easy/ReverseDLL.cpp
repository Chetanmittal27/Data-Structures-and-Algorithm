#include<iostream>
#include<vector>
#include<stack>
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

// BRUTE FORCE
// Node* reverseDLL(Node* head){
//     stack<int>st;
//     Node* temp = head;
//     while(temp != NULL){
//         st.push(temp -> data);
//         temp = temp -> next;
//     }

//     temp = head;
//     while(temp != NULL){
//         temp -> data = st.top();
//         st.pop();
//         temp = temp -> next;
//     }

//     return head;
// }

// Better approach
Node* reverseDLL(Node* head){
    Node* temp = NULL;
    Node* current = head;
    while(current != NULL){
        temp = current -> back;
        current -> back = current -> next;
        current -> next = temp;

        current = current -> back;
    }
    if (temp != NULL) {
        head = temp->back;
    }
    
    return head;
}

void printDLL(Node* head){
    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
}

int main(){
    vector<int>arr = {1,2,3,4};
    Node* head = CreateDLL(arr);
    printDLL(head);

    cout << endl;

    head = reverseDLL(head);
    printDLL(head);
    return 0;
}