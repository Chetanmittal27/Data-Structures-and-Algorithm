#include<iostream>
#include<queue>
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


int depthOfTree(Node* root){
    if(root == NULL) return 0;

    queue<Node*>q;
    q.push(root);
    int depth = 0;

    while(!q.empty()){
        int size = q.size();
        depth++;

        for(int i=0;i<size;i++){
            Node* temp = q.front();
            q.pop();

            if(temp -> left){
                q.push(temp -> left);
            }

            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
    return depth;
}

int main(){
    Node* root = NULL;
    root = createBinaryTree(root);

    cout << depthOfTree(root);
    return 0;
}