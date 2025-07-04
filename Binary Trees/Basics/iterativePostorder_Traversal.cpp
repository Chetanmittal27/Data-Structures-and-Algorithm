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

void iterative_postorder(Node* root){
    if(root == NULL){
        return;
    }

    stack<Node*>stk;
    Node* current = root;

    while(current != NULL || !stk.empty()){

        if(current != NULL){
            stk.push(current);
            current = current -> left;
        }

        else{
            Node* temp = stk.top() -> right;

            if(temp == NULL){
                temp = stk.top();
                stk.pop();

                cout << temp -> data << " ";

                while(!stk.empty() && temp == stk.top() -> right){
                    temp = stk.top();
                    stk.pop();

                    cout << temp -> data << " ";
                }
            }
            else{
                current = temp;
            }
        }
    }
}

int main(){
    Node* root = NULL;
    root = createBinaryTree(root);

    iterative_postorder(root);

    return 0;
}