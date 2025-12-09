#include<iostream>
#include<vector>
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

Node* CreateBinaryTree(Node* root){

    int val;
    cout << "Enter the node" << endl;
    cin >> val;

    if(val == -1){
        return NULL;
    }

    root = new Node(val);

    cout << "Enter the node in the left of " << val << endl;
    root -> left = CreateBinaryTree(root -> left);

    cout << "Enter the node in the right of " << val << endl;
    root -> right = CreateBinaryTree(root -> right);


    return root;
}


vector<vector<int>>traversal(Node* root){

    vector<vector<int>>ans;

    if(root == NULL){
        return ans;
    }

    queue<Node*>q;
    q.push(root);

    while(!q.empty()){

        int n = q.size();
        vector<int>temp;

        for(int i=0;i<n;i++){

            Node* it = q.front();
            q.pop();

            temp.push_back(it -> data);


            if(it -> left != NULL){
                q.push(it -> left);
            }

            if(it -> right != NULL){
                q.push(it -> right);
            }
        }

        ans.push_back(temp);
    }

    return ans;
}

int main(){

    Node* root = NULL;
    root = CreateBinaryTree(root);

    vector<vector<int>>result = traversal(root);

    for(auto level : result){
        for(auto element : level){
            cout << element << " ";
        }
    }
    return 0;
}