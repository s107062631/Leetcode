/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root) {
    if(root==NULL){
        return 0;
    }else{
        int left=minDepth(root->left), right=minDepth(root->right);
        if(left==0 && right==0){
            return 1;
        }else if(left==0){
            return right+1;
        }else if(right==0){
            return left+1;
        }else{
            if(left<right){
                return left+1;
            }else{
                return right+1;
            }
        }
    }
}