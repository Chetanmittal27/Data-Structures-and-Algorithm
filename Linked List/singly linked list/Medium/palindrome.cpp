// Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

// Brute force approach
/*
class Solution {
public:
    bool isPalindrome(ListNode* head) {

        if(head == NULL) return true;
        if(head -> next == NULL) return true;
        
        ListNode* temp = head;
        stack<int>st;

        while(temp != NULL){
            st.push(temp -> val);
            temp = temp -> next;
        }

        temp = head;
        
        while(temp != NULL){
            if(temp -> val != st.top()){
                return false;
            }

            else{
                st.pop();
                temp = temp -> next;
            }
        }
        return true;
    }
};
*/

// Optimal approach
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

Node* createLL(vector<int>&arr1){
    Node* head = new Node(arr1[0]);
    Node* mover = head;
    for(int i=1;i<arr1.size();i++){
        Node* temp = new Node(arr1[i]);
        mover -> next = temp;
        mover = mover -> next;
    }
    return head;
}

// Brute force approach

/*
bool palindrome(Node* head){
    stack<int>st;
    Node* temp = head;
    while(temp != NULL){
        st.push(temp -> data);
        temp = temp -> next;
    }

    temp = head;

    while(temp != NULL){
        if(temp -> data == st.top()){
            st.pop();
            temp = temp -> next;
        }
        else{
            return false;
        }
    }
    return true;
}
*/

// Optimal approach
bool palindrome(Node* head){
    
    // finding middle node
    Node* slow = head;
    Node* fast = head;

    while(fast -> next != NULL && fast -> next -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    Node* first = head;

    // reversing the linked list after the middle node
    Node* second = slow -> next;
    Node* prev = NULL;

    while(second != NULL){
        Node* front = second -> next;
        second -> next = prev;
        prev = second;
        second = front;
    }

    second = prev;

    while(second != NULL){
        if(second -> data == first -> data){
            first = first -> next;
            second = second -> next;
        }

        else{
            return false;
        }
    }
    return true;
}
int main(){
    vector<int>arr1 = {1,3,1,2,2,1,3,1};
    Node* head = createLL(arr1);

    cout << palindrome(head);
    return 0;
}