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


vector<int>predecessor_successor(Node* root , int key){

    vector<int>ans;
    int pred = -1;
    int succ = -1;

    Node* temp = root;

    while(temp -> data != key){

        if(key > temp -> data){
            pred = temp -> data;
            temp = temp -> right;
        }

        else{
            succ = temp -> data;
            temp = temp -> left;
        }
    }

    if(temp == NULL){
        ans.push_back(pred);
        ans.push_back(succ);

        return ans;
    }


    if(temp -> left){

        Node* leftTree = temp -> left;
        while(leftTree -> right != NULL){
            leftTree = leftTree -> right;
        }

        pred = leftTree -> data;
    }


    if(temp -> right){
        Node* rightTree = temp -> right;
        while(rightTree -> left != NULL){
            rightTree = rightTree -> left;
        }

        succ = rightTree -> data;
    }


    ans.push_back(pred);
    ans.push_back(succ);
    return ans;
}



Node* insertIntoTree(Node* root , int val){

    if(root == NULL){
        root = new Node(val);
        return root;
    }


    if(val > root -> data){
        root -> right = insertIntoTree(root -> right , val);
    }

    else{
        root -> left = insertIntoTree(root -> left , val);
    }

    return root;
}



void takeInput(Node*& root){

    int val;
    cin >> val;

    while(val != -1){
        root = insertIntoTree(root , val);
        cin >> val;
    }
}


int main(){
    Node* root = NULL;

    takeInput(root);

    vector<int>result = predecessor_successor(root , 10);
}