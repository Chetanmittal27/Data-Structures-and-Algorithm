/*
Given the root of a binary search tree and an integer k, return true if there exist two elements in the BST such that their sum is equal to k, or false otherwise.
*/

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


void inorder(Node* root , vector<int> &arr){
    if(root == NULL){
        return;
    }

    inorder(root -> left , arr);
    arr.push_back(root -> data);
    inorder(root -> right , arr);

}


bool twoSum(Node* root , int k){

    vector<int>arr;
    inorder(root , arr);

    int i = 0 , j = arr.size() - 1;

    while(i < j){
        int sum = arr[i] + arr[j];

        if(sum == k){
            return true;
        }

        else if(sum > k){
            j--;
        }

        else{
            i++;
        }
    }

    return false;
}



int main(){
    Node* root = NULL;

    takeInput(root);

    cout << twoSum(root , 28);
}