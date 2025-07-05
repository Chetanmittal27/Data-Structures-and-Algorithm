// Brute Force
/*

#include<iostream>
#include<algorithm>
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

Node* BinaryTreeCreation(Node* root){
    cout << "Enter the root node " << endl;
    int val;
    cin >> val;

    root = new Node(val);

    if(val == -1){
        return NULL;
    }

    cout << "Enter the node in the left of the node " << val << endl;
    root -> left = BinaryTreeCreation(root);
    cout << "Enter the node in the right of the node " << val << endl;
    root -> right = BinaryTreeCreation(root);

    return root;
}


int Height(Node* root){
    if(root == NULL) return 0;

    int h1 = Height(root -> left);
    int h2 = Height(root -> right);

    return max(h1 , h2) + 1;
}

int Diameter(Node* root){
    if(root == NULL){
        return 0;
    }

    int op1 = Diameter(root -> left);
    int op2 = Diameter(root -> right);

    int op3 = Height(root -> left) + Height(root -> right);

    return max(op1 , max(op2 , op3));
}

int main(){
    Node* root = NULL;
    root = BinaryTreeCreation(root);

    cout << Diameter(root);
    return 0;
}

*/


// Optimal approach

#include<iostream>
#include<algorithm>
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

Node* BinaryTreeCreation(Node* root){
    cout << "Enter the root node " << endl;
    int val;
    cin >> val;

    root = new Node(val);

    if(val == -1){
        return NULL;
    }

    cout << "Enter the node in the left of the node " << val << endl;
    root -> left = BinaryTreeCreation(root);
    cout << "Enter the node in the right of the node " << val << endl;
    root -> right = BinaryTreeCreation(root);

    return root;
}


int Height(Node* root , int& diameter){

    if(root == NULL){
        return 0;
    }

    int lh = Height(root -> left , diameter);
    int rh = Height(root -> right , diameter);

    diameter = max(diameter , lh+rh);

    return 1 + max(lh , rh);
}

int DiameterOfTree(Node* root){
    int diameter = 0;
    Height(root , diameter);
    return diameter;
}


int main(){
    Node* root = NULL;
    root = BinaryTreeCreation(root);

    cout << DiameterOfTree(root);
    return 0;
}