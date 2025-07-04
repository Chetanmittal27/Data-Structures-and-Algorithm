/*
Given a binary tree, determine if it is height-balanced.
A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.
*/

// Brute force
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

    int calculateHeight(TreeNode* root){
        queue<TreeNode*>qh;
        qh.push(root);
        int depth = 0;

        while(!qh.empty()){
            int size = qh.size();
            depth++;

            for(int i=0;i<size;i++){
                TreeNode* node = qh.front();
                qh.pop();

                if(node -> left){
                    qh.push(node -> left);
                }

                if(node -> right){
                    qh.push(node -> right);
                }
            }
        }
        return depth;
    }


    bool isBalanced(TreeNode* root) {
        
        if(root == NULL) return true;

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();

            for(int i=0;i<size;i++){
                TreeNode* temp = q.front();
                q.pop();

                int leftSubtree = 0;
                int rightSubtree = 0;

                if(temp -> left){
                    q.push(temp -> left);
                    leftSubtree = calculateHeight(temp -> left);
                }

                if(temp -> right){
                    q.push(temp -> right);
                    rightSubtree = calculateHeight(temp -> right);
                }

                if(abs(leftSubtree - rightSubtree) > 1){
                    return false;
                }
            }
        }
        return true;
    }
};


// Optimal approach
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

    int checkHeight(TreeNode* root){
        if(root == NULL) return 0;

        int left = checkHeight(root -> left);
        if(left == -1) return -1;

        int right = checkHeight(root -> right);
        if(right == -1) return -1;

        if(abs(left - right) > 1){
            return -1;
        }

        return 1+max(left , right);
    }

    bool isBalanced(TreeNode* root) {
        
        return checkHeight(root) != -1;
        
    }
};