#include<iostream>
#include<vector>
#include<map>
#include<queue>
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
    cout << "Enter the root node " << endl;
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


void addLeavesNodes(Node* root , vector<int>&ans){
    if(isLeaf(root)){
        ans.push_back(root -> data);
    }

    if(root -> left){
        addLeavesNodes(root -> left , ans);
    }

    if(root -> right){
        addLeavesNodes(root -> right , ans);
    }
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

vector<int>BoundaryTraversal(Node* root){

    vector<int>ans;
    if(root == NULL){
        return ans;
    }

    if(!isLeaf(root)){
        ans.push_back(root -> data);
    }

    addLeftBoundary(root , ans);
    addLeavesNodes(root , ans);
    addRightBoundary(root , ans);

    return ans;
}

int main(){
    Node* root = NULL;
    root = createBinaryTree(root);

    vector<int>result = BoundaryTraversal(root);

    for(auto it : result){
        cout << it << " ";
    }

    return 0;
}