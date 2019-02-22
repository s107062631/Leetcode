/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool Sum(struct TreeNode* root, int sum, int parent){
    if(root==NULL){
        return false;
    }else{
        bool left, right;
        right = Sum(root->right, sum, root->val+parent);
        left = Sum(root->left, sum, root->val+parent);
        if(root->left==NULL && root->right==NULL){
            if(root->val+parent==sum){
                return true;
            }else{
                return false;
            }
        }else{
            return left | right;
        }
    }
}

bool hasPathSum(struct TreeNode* root, int sum) {
    return Sum(root, sum, 0);
}