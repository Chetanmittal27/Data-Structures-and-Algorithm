#include<iostream>
using namespace std;

class Node{
    public:
       int data;
       Node* left;
       Node* right;
    
    public:
       Node(int d){
        data = d;
        left = nullptr;
        right = nullptr;
       }
};

Node* insertIntoTree(Node* root , int val){

    if(root == NULL){
        root = new Node(val);
        return root;
    }

    if(val > root -> data){
        root -> right = insertIntoTree(root -> right, val);
    }

    else{
        root -> left = insertIntoTree(root -> left, val);
    }

    return root;
}


void takeInput(Node*& root){

    int val;
    cin >> val;

    while(val != -1){
        root = insertIntoTree(root , val);
        cin >> val;
    }
}


int min_value(Node* root){

    Node* temp = root;

    while(temp -> left != NULL){
        temp = temp -> left;
    }

    return temp -> data;
}


int max_Value(Node* root){

    Node* temp = root;

    while(temp -> right != NULL){
        temp = temp -> right;
    }

    return temp -> data;
}


int main(){
    Node* root = NULL;
    
    cout << "Enter the value of nodes" << endl;
    takeInput(root);

    cout << min_value(root) << endl;
    cout << max_Value(root) << endl;
    return 0;
}