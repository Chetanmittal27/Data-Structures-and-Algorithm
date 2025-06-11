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

Node* CreationofTree(Node* root){
    int data;
    cin >> data;
    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter the node at the left of " << data << endl;
    root -> left = CreationofTree(root -> left);

    cout << "Enter the node at the right of " << data << endl;
    root -> right = CreationofTree(root -> right);

    return root;
}

void inorder(Node* root){
    if (root == NULL){
        return;
    }

    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}

int main(){
    Node* root = NULL;
    root = CreationofTree(root);

    cout << "inorder traversal is " << endl;
    inorder(root);
    return 0;
}