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

Node* creationOfBinaryTree(Node* root){

    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter data representing the left node of " << data << endl;
    root -> left = creationOfBinaryTree(root);
    cout << "Enter data representing the right node of " << data << endl;
    root -> right = creationOfBinaryTree(root);

    return root;
}

int main(){
    Node* root = NULL;
    root = creationOfBinaryTree(root);
}