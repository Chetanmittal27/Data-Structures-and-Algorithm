/*
We need to flatten the give BST to sorted list means BST to Right Skewed BST i.e. Left child of all the nodes should be null and value at the right child must be greater than the current node;
*/

/*
Given the root of a binary search tree and an integer k, return true if there exist two elements in the BST such that their sum is equal to k, or false otherwise.
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


void inorder(Node* root , vector<int> &arr){
    if(root == NULL){
        return;
    }

    inorder(root -> left , arr);
    arr.push_back(root -> data);
    inorder(root -> right , arr);

}


Node* flattenBST(Node* root){
    
    vector<int>arr;
    inorder(root , arr);

    Node* newRoot = new Node(arr[0]);
    Node* mover = newRoot;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> right = temp;
        temp -> left = NULL;
        mover = temp;
    }

    mover -> left = NULL;
    mover -> right = NULL;

    return newRoot;
}


void printLL(Node* newRoot){
    while(newRoot != NULL){
        cout << newRoot -> data << " ";
        newRoot = newRoot -> right;
    }
}


int main(){
    Node* root = NULL;

    takeInput(root);

    root = flattenBST(root);
    printLL(root);
    return 0;
}