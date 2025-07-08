/*
Given the root of a binary tree, return the top view of the binary tree.

Top view of a binary tree is the set of nodes visible when the tree is viewed from the top. Return nodes from the leftmost node to the rightmost node. Also if 2 nodes are outside the shadow of the tree and are at the same position then consider the left ones only(i.e. leftmost). 
*/


#include<iostream>
#include<vector>
#include<queue>
#include<map>
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
    cout << "Enter the root node" << endl;
    int val;
    cin >> val;

    root = new Node(val);

    if(val == -1){
        return NULL;
    }

    cout << "Enter the node in the left of the node " << val <<  endl;
    root -> left = createBinaryTree(root);
    cout << "Enter the node in the right of the node " <<val <<  endl;
    root -> right = createBinaryTree(root);

    return root;
}

vector<int>topView(Node* root){
    vector<int>ans;

    if(root == NULL){
        return ans;
    }

    queue<pair<Node* , int>>q;
    map<int , int>mpp;

    q.push({root , 0});

    while(!q.empty()){

        auto it = q.front();
        q.pop();

        Node* temp = it.first;
        int line = it.second;

        if(mpp.find(line) == mpp.end()){
            mpp[line] = temp -> data;
        }

        if(temp -> left){
            q.push({temp -> left , line - 1});
        }

        if(temp -> right){
            q.push({temp -> right , line + 1});
        }
    }

    for(auto it : mpp){
        ans.push_back(it.second);
    }
    return ans;
}


int main(){
    Node* root = NULL;
    root = createBinaryTree(root);
    vector<int>result = topView(root);

    for(auto ele : result){
        cout << ele << " ";
    }
    return 0;
}