/*

#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    public:
    Node(int v){
        val = v;
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

Node* sortLL(Node* head){

    int cnt0 = 0 , cnt1 = 0 , cnt2 = 0;
    Node* temp = head;
    
    while(temp != NULL){
        
        if(temp -> val == 0){
            cnt0++;
        }
        else if(temp -> val == 1){
            cnt1++;
        }
        else{
            cnt2++;
        }
        
        temp = temp -> next;
    }

    temp = head;

    while(cnt0 > 0){
        temp -> val = 0;
        temp = temp -> next;
        cnt0--;
    }

    while(cnt1 > 0){
        temp -> val = 1;
        temp = temp -> next;
        cnt1--;
    }

    while(cnt2 > 0){
        temp -> val = 2;
        temp = temp -> next;
        cnt2--;
    }

    return head;
}

void printLL(Node* head){
    while(head != NULL){
        cout << head -> val << " ";
        head = head -> next;
    }
}

int main(){
    vector<int>arr = {1,0,2,0,1};
    Node* head = createLL(arr);
    printLL(head);
    cout << endl;

    head = sortLL(head);
    printLL(head);
    cout << endl;
    return 0;
}

*/


/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:
    ListNode *sortList(ListNode *head) {

        if(head == NULL) return NULL;
        if(head -> next == NULL) return head;

        ListNode* temp = head;
        ListNode* zero = new ListNode(-1);
        ListNode* one = new ListNode(-1);
        ListNode* two = new ListNode(-1);

        ListNode* dummyzero = zero;
        ListNode* dummyone = one;
        ListNode* dummytwo = two;

        while(temp != NULL){

            if(temp -> val == 0){
                zero -> next = temp;
                zero = zero -> next;
            }

            else if(temp -> val == 1){
                one -> next = temp;
                one = one -> next;
            }

            else{
                two -> next = temp;
                two = two -> next;
            }

            temp = temp -> next;
        }


        zero -> next = dummyone -> next;
        one -> next = dummytwo -> next;
        two -> next = NULL;

        head = dummyzero -> next;

        return head;
    }
};