#include<iostream>
#include<vector>
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

Node* CreateBinaryTree(Node* root){

    int val;
    cout << "Enter the new node" << endl;
    cin >> val;

    root = new Node(val);

    if(val == -1){
        return NULL;
    }

    cout << "Enter the data at the left of " << val << endl;
    root -> left = CreateBinaryTree(root -> left);

    cout << "Enter the data at the right of " << val << endl;
    root -> right = CreateBinaryTree(root -> right);

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
    root = CreateBinaryTree(root);

    cout << "Preorder of the Binary Tree is : ";
    preorder(root);
    cout << endl;

    
    return 0;
}