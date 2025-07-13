/* Given a binary search tree (BST), find the lowest common ancestor (LCA) node of two given nodes in the BST.

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

*/

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


Node* lca(Node* root , Node* p , Node* q){

    if(root == NULL){
        return root;
    }

    while(root != NULL){

        if(root -> data > p -> data  &&  root -> data > q -> data){
            root = root -> left;
        }

        else if(root -> data < p -> data  &&  root -> data < q -> data){
            root = root -> right;
        }

        else{
            return root;
        }
    }
    return NULL;
}

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


int main(){
    Node* root = NULL;

    takeInput(root);

    vector<int>result = predecessor_successor(root , 10);
}