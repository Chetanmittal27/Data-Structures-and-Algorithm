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
    cout << "Enter root node" << endl;
    int val;
    cin >> val;

    root = new Node(val);

    if(val == -1){
        return NULL;
    }

    cout << "Enter the node in the left of the node " << val << endl;
    root -> left = createBinaryTree(root);
    cout << "Enter the node in the right of the node " << val << endl;
    root -> right = createBinaryTree(root);

}

void iterative_preorder(Node* root){

    if(root == nullptr){
        return;
    }

    stack<Node*> stk;
    stk.push(root);

    while(!stk.empty()){
        Node* temp = stk.top();
        stk.pop();

        cout << temp -> data << " ";

        if(temp -> right){
            stk.push(temp -> right);
        }

        if(temp -> left){
            stk.push(temp -> left);
        }
    }
}

int main(){
    Node* root = NULL;
    root = createBinaryTree(root);

    iterative_preorder(root);

    return 0;
}