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
    cout << "Enter the root node" << endl;
    int data;
    cin >> data;

    root = new Node(data);

    cout << "Enter the node in the left of the node " << data << endl;
    root -> left = createBinaryTree(root);
    cout << "Enter the node in the right of the node " << data << endl;
    root -> right = createBinaryTree(root);

    return root;
}

void view(Node* root , vector<int>&ans , int level){
    if(root == NULL){
        return;
    }

    if(level == ans.size()){
        ans.push_back(root -> data);
    }

    view(root -> right , ans , level + 1);
    view(root -> left , ans , level + 1);

}
vector<int>rightView(Node* root){
    vector<int>ans;
    int level = 0;

    view(root , ans , 0);
    return ans;
}

int main(){
    Node* root = NULL;
    root = createBinaryTree(root);

    vector<int>result = rightView(root);
    for(auto it : result){
        cout << it << " ";
    }
}


// Optimal approach
class Solution {
    public:

        void rightView(Node* root , vector<int>&ans , int level){
            if(root == NULL){
                return;
            }

            if(level == ans.size()){
                ans.push_back(root -> val);
            }

            rightView(root -> right , ans , level + 1);
            rightView(root -> left , ans , level + 1);

        }
       
        vector<int>rightSideView(Node* root){
            vector<int>ans;

            int level = 0;

            rightView(root , ans , level);

            return ans;
        }
}