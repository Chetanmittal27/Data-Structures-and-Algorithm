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

Node* createBinaryTree(Node* root){
    cout << "Enter the root node" << endl;
    int data;
    cin >> data;

    if(data == -1){
        return NULL;
    }
    
    root = new Node(data);


    cout << "Enter the node left to the node " << data << endl;
    root -> left = createBinaryTree(root);
    cout << "Enter the node right to the node " << data << endl;
    root -> right = createBinaryTree(root);

    return root;
}

int main(){
    Node* root = NULL;
    root = createBinaryTree(root);
    preOrder(root);
    cout << endl;

    inOrder(root);
    cout << endl;

    postOrder(root);
    cout << endl;
    return 0;
}