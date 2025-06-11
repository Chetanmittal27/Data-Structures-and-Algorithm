#include<iostream>
using namespace std;

class Node{
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

Node* creationoftree(Node* root){
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1){
        return NULL;
    }

    cout<< "Enter the node at the left of " << data << endl;
    root -> left = creationoftree(root -> left);

    cout << "Enter the node at the right of " << data << endl;
    root -> right = creationoftree(root -> right);

    return root;
}

void postorder(Node* root){
    if (root == NULL){
        return;
    }

    postorder(root -> left);
    postorder(root -> right);
    cout << root -> data << " ";
}
int main(){
    Node* root = NULL;
    root = creationoftree(root);
}