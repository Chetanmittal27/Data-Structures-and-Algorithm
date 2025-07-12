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
        root -> right = insertIntoTree(root -> right , val);
    }

    else{
        root -> left = insertIntoTree(root -> left , val);
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


Node* deleteNode(Node* root , int x){

    if(root == NULL){
        return root;
    }

    if(root -> data == x){
        // 0 childs
        if(root -> left == NULL && root -> right == NULL){
            delete root;
            return NULL;
        }

        // 1 child

        // Left Child
        if(root -> left != NULL && root -> right == NULL){
            Node* temp = root -> left;
            delete root;
            return temp;
        }

        // Right Child
        if(root -> left == NULL && root -> right != NULL){
            Node* temp = root -> right;
            delete root;
            return temp;
        }


        // 2 Childs
        if(root -> left != NULL && root -> right != NULL){

            int mini = min_value(root -> right);
            root -> data = mini;

            root -> right = deleteNode(root -> right , mini);

            return root;

        }
    }

    else if(x > root -> data){
        root -> right = deleteNode(root -> right , x);
    }

    else{
        root -> left = deleteNode(root -> left , x);
    }

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

    cout << "Enter the nodes of Binary Search Tree" << endl;
    takeInput(root);

    preorder(root);

    root = deleteNode(root , 50);

    preorder(root);

    return 0;
}