/*
Given a root of Binary Tree, perform the boundary traversal of the tree. 

The boundary traversal is the process of visiting the boundary nodes of the binary tree in the anticlockwise direction, starting from the root.

The boundary of a binary tree is the concatenation of the root, the left boundary, the leaves ordered from left-to-right, and the reverse order of the right boundary.

The left boundary is the set of nodes defined by the following:

The root node's left child is in the left boundary. If the root does not have a left child, then the left boundary is empty.
If a node in the left boundary and has a left child, then the left child is in the left boundary.
If a node is in the left boundary, has no left child, but has a right child, then the right child is in the left boundary.
The leftmost leaf is not in the left boundary.
The right boundary is similar to the left boundary, except it is the right side of the root's right subtree. Again, the leaf is not part of the right boundary, and the right boundary is empty if the root does not have a right child.
*/


#include<iostream>
#include<vector>
#include<stack>
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
    cout << "Enter the root node"<< endl;
    int data;
    cin >> data;

    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter the node in the left of the node " << data << endl;
    root -> left = createBinaryTree(root);
    cout << "Enter the node in the right of the node " << data << endl;
    root -> right = createBinaryTree(root);

    return root;
}


bool isLeaf(Node* root){
    return root && !root -> left && !root -> right;
}

void addLeftBoundary(Node* root , vector<int>&ans){
    Node* current = root -> left;

    while(current){

        if(!isLeaf(current)){
            ans.push_back(current -> data);
        }

        if(current -> left){
            current = current -> left;
        }

        else{
            current = current -> right;
        }
    }
}

void addLeafNodes(Node* root , vector<int>&ans){

    if(isLeaf(root)){
        ans.push_back(root -> data);
        return;
    }

    if(root == NULL){
        return;
    }

    addLeafNodes(root -> left , ans);
    addLeafNodes(root -> right , ans);
}

void addRightBoundary(Node* root , vector<int>&ans){
    Node* current = root -> right;
    stack<int>s;

    while(current){
        if(!isLeaf(current)){
            s.push(current -> data);
        }

        if(current -> left){
            current = current -> left;
        }

        else{
            current = current -> right;
        }
    }

    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
}

vector<int>Boundary_Traversal(Node* root){
    vector<int>ans;

    if(root == NULL){
        return ans;
    }

    if(!isLeaf(root)){
        ans.push_back(root -> data);
    }

    addLeftBoundary(root , ans);
    addLeafNodes(root , ans);
    addRightBoundary(root , ans);

    return ans;

}

int main(){
    Node* root = NULL;
    root = createBinaryTree(root);

    vector<int>result = Boundary_Traversal(root);

    for(auto it : result){
        cout << it << " ";
    }
    return 0;
}