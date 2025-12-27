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

Node* createBinaryTree(Node* root){

    int val;
    cout << "Enter the value" << endl;
    cin >> val;

    if(val == -1){
        return NULL;
    }

    root = new Node(val);

    cout << "Enter the node in the left of " << val << endl;
    root -> left = createBinaryTree(root -> left);

    cout << "Enter the node in the right of " << val << endl;
    root -> right = createBinaryTree(root -> right);

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

void solve(Node* root , vector<vector<int>>& ans , vector<int>& arr){

    if(root == NULL){
        return;
    }


    arr.push_back(root -> data);

    if(root -> left == NULL && root -> right == NULL){
        ans.push_back(arr);
    }


    solve(root -> left , ans , arr);
    solve(root -> right , ans , arr);

    arr.pop_back();
}


vector<vector<int>>rootToLeaf(Node* root){

    vector<vector<int>>ans;
    vector<int>arr;

    solve(root , ans , arr);
    return ans;
}

int main(){
    Node* root = NULL;
    root = createBinaryTree(root);
    preorder(root);
    cout << endl;

    vector<vector<int>>ans = rootToLeaf(root);
    for(auto it : ans){
        for(auto val : it){
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}