class Solution {
    public:
       
       bool check(TreeNode* root1 , TreeNode* root2){
        if(root1 == NULL || root2 == NULL){
            return root1 == root2;
        }

        if(roo1 -> data != root2 -> data){
            return false;
        }


        return (check(root1 -> left , root2 -> right) && (root -> right , root2 -> left));

       }
       
       bool isSymmetry(TreeNode* root){
        return root == NULL || check(root -> left , root -> right);
       }
}