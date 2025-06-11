/*
You are given two non-negative numbers 'num1' and 'num2' represented in the form of linked lists.
The digits in the linked lists are stored in reverse order, i.e. starting from least significant digit (LSD) to the most significant digit (MSD), and each of their nodes contains a single digit.

Calculate the sum of the two numbers and return the head of the sum list.
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

Node* sumTwoLL(Node* head1 , Node* head2){
    int carry = 0;
    Node* dummyNode = new Node(-1);
    Node* temp = dummyNode;

    Node* temp1 = head1;
    Node* temp2 = head2;
    while(temp1 != NULL && temp2 != NULL){
        int sum = 0;
        sum += carry +  temp1 -> data  + temp2 -> data;
        Node* newNode = new Node(sum % 10);
        carry = sum / 10;

        temp -> next = newNode;
        temp = newNode;

        temp1 = temp1 -> next;
        temp2 = temp2 -> next;
    }

    while(temp1 != NULL){
        int sum = 0;
        sum = sum + carry + temp1 -> data;
        Node* newNode = new Node(sum % 10);
        carry = sum / 10;

        temp -> next = newNode;
        temp = newNode;

        temp1 = temp1 -> next;
    }

    while(temp2 != NULL){
        int sum = 0;
        sum = sum + carry + temp2 -> data;
        Node* newNode = new Node(sum % 10);
        carry = sum / 10;

        temp -> next = newNode;
        temp = newNode;

        temp2 = temp2 -> next;
    }

    if(carry > 0){
        temp -> next = new Node(carry);
    }

    return dummyNode -> next;
}

Node* CreateLL1(int num1){
    Node* head1 = nullptr;
    Node* mover1 = nullptr;

    int rem1;
    while(num1 > 0){
        rem1 = (num1 % 10);
        num1 = (num1 / 10);
        Node* temp1 = new Node(rem1);
        if(head1 == NULL){
            head1 = temp1;
            mover1 = temp1;
        }
        else{
            mover1 -> next = temp1;
            mover1 = temp1;
        }
    }
    return head1;
}

Node* CreateLL2(int num2){
    Node* head2 = nullptr;
    Node* mover2 = nullptr;

    int rem2;
    while(num2 > 0){
        rem2 = num2 % 10;
        num2 = num2 / 10;
        Node* temp2 = new Node(rem2);

        if(head2 == NULL){
            head2 = temp2;
            mover2 = temp2;
        }
        else{
            mover2 -> next = temp2;
            mover2 = temp2;
        }
    }
    return head2;
}

void printLL(Node* head){
    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
}

int main(){
    int num1 , num2;
    cin >> num1;
    cin >> num2;

    Node* head1 = CreateLL1(num1);
    Node* head2 = CreateLL2(num2);

    Node* head = sumTwoLL(head1 , head2);

    printLL(head1);
    cout << endl;

    printLL(head2);
    cout << endl;

    printLL(head);
    cout << endl;

    return 0;
}