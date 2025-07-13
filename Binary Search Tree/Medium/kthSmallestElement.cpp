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

    void inorder(TreeNode* root , vector<int>&ans){
        
        if(root == NULL){
            return;
        }

        inorder(root -> left , ans);
        ans.push_back(root -> val);
        inorder(root -> right , ans);

    }


    int kthSmallest(TreeNode* root, int k) {
        
        vector<int>ans;
        inorder(root , ans);

        return ans[k-1];
    }
};







// Optimal 
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

    int smallest(TreeNode* root , int k , int& i){

        if(root == NULL){
            return -1;
        }

        int Left = smallest(root -> left , k , i);

        if(Left != -1){
            return Left;
        }

        i++;
        if(i == k){
            return root -> val;
        }

        int Right = smallest(root -> right , k , i);

        return Right;
    }
    

    int kthSmallest(TreeNode* root, int k) {
        
        int i = 0;

        return smallest(root , k , i);
    }
};