#include<iostream>
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
    int val;
    cin >> val;

    root = new Node(val);

    if(val == -1){
        return NULL;
    }

    cout << "Enter the node in the left of node " << val << endl;
    root -> left = createBinaryTree(root);
    cout << "Enter the node in the right of node " << val << endl;
    root -> right = createBinaryTree(root);

    return root;
}

void iterative_inorder(Node* root){
    if(root == NULL){
        return;
    }

    stack<Node*>stk;
    Node* temp = root;

    while(true){
        
        if(temp != NULL){
            stk.push(temp);
            temp = temp -> left;
        }

        else{
            if(stk.empty()) break;
            temp = stk.top();
            stk.pop();
            cout << temp -> data << " ";
            temp = temp -> right;
        }
    }
}

int main(){
    Node* root = NULL;
    root = createBinaryTree(root);
    iterative_inorder(root);
    return 0;
}