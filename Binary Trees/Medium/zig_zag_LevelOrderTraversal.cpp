#include<iostream>
#include<vector>
#include<queue>
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

    cout << "Enter the node in the left of node " << val << endl;
    root -> left = BinaryTreeCreation(root);
    cout << "Enter the node in the right of node " << val << endl;
    root -> right = BinaryTreeCreation(root);

    return root;
}

vector<vector<int>> zigzagLevelOrder(Node* root){

    vector<vector<int>>result;

    if(root == NULL){
        return result;
    }

    queue<Node*>q;
    q.push(root);
    int levelNumber = 0;

    while(!q.empty()){
        int size = q.size();
        vector<int>level;

        for(int i=0;i<size;i++){
            Node* temp = q.front();
            q.pop();

            if(temp -> left){
                q.push(temp -> left);
            }

            if(temp -> right){
                q.push(temp -> right);
            }


            level.push_back(temp -> data);
        }

        if(levelNumber % 2 == 1){
            reverse(level.begin() , level.end());
        }


        result.push_back(level);
        levelNumber++;
    }
    return result;
}



int main(){
    Node* root = NULL;
    root = BinaryTreeCreation(root);

    vector<vector<int>>ans = zigzagLevelOrder(root);
    
    for(const auto& row : ans) {
        for(int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }   
}