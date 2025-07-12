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

Node* insertIntoTree(Node* root , int d){

    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(d > root -> data){
        root -> right = insertIntoTree(root -> right , d);
    }

    else{
        root -> left = insertIntoTree(root -> left , d);
    }


    return root;
}

bool searchInTree(Node* root , int x){

    if(root == NULL){
        return false;
    }

    if(root -> data == x){
        return true;
    }

    else if(x > root -> data){
        return searchInTree(root -> right , x);
    }

    else{
        return searchInTree(root -> left , x);
    }
}


void takeInput(Node*& root){
    int data;
    cin >> data;

    while(data != -1){
        root = insertIntoTree(root , data);
        cin >> data;
    }
}


void preorder(Node* root){
    if(root == NULL){
        return;
    }

    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
}


int main(){
    Node* root = NULL;

    cout << "Enter data to create Binary Search Tree" << endl;
    takeInput(root);

    preorder(root);

    cout << searchInTree(root , )

    return 0;
}