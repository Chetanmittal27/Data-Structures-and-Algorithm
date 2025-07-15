/*
Given the root of a binary search tree, return a balanced binary search tree with the same node values. If there is more than one answer, return any of them.

A binary search tree is balanced if the depth of the two subtrees of every node never differs by more than 1.
*/

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
    

    TreeNode* newBalanceBST(vector<int> &ans , int left , int right){

        while(left <= right){

            int mid = left + (right - left) / 2;

            TreeNode* root = new TreeNode(ans[mid]);
            root -> left = newBalanceBST(ans , left , mid - 1);
            root -> right = newBalanceBST(ans , mid + 1 , right);

            return root;
        }
        return NULL;
    }


    void inorder(TreeNode* root , vector<int> &ans){

        if(root == NULL){
            return;
        }

        inorder(root -> left , ans);
        ans.push_back(root -> val);
        inorder(root -> right , ans);

    }


    TreeNode* balanceBST(TreeNode* root) {
        
        vector<int>ans;
        inorder(root , ans);

        root = newBalanceBST(ans , 0 , ans.size() - 1);

        return root;
    }
};