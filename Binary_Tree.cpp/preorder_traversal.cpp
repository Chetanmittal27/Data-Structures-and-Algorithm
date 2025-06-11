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

Node* creationofTraversal(Node* root){
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1){
        return NULL;
    }

    cout << "Enter the node at the left of " << data << endl;
    root -> left = creationofTraversal(root -> left);

    cout << "Enter the node at the right of " << data << endl;
    root -> right = creationofTraversal(root -> right);

    return root;
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
    root = creationofTraversal(root);

    cout << "Preorder Traversal is " << endl;
    preorder(root);
}