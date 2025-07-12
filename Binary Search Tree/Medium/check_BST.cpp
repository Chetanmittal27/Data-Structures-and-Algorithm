/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void inorder(TreeNode* root , vector<int>&result){

        if(root == NULL){
            return;
        }

        inorder(root -> left , result);
        result.push_back(root -> val);
        inorder(root -> right , result);

    }

    bool isValidBST(TreeNode* root) {
        vector<int>result;
        inorder(root , result);

        for(int i=1;i<result.size();i++){
            if(result[i] <= result[i-1]){
                return false;
            }
        }

        return true;
    }
};



// Optimal approach

class Solution{
    public:
      
    bool isBST(Node* root , int min , int max){

        if(root == NULL){
            return true;
        }

        if(root -> data <= min || root -> data >= max){
            return false;
        }

        bool isLeft = isBST(root -> left , min , root -> data);
        bool isRight = isBST(root -> right , root -> data , max);

        return isLeft && isRight;
    }


    bool isValidBST(Node* root){
        return isBST(root , INT_MIN , INT_MAX);
    }
}