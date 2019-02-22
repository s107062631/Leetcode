/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool checktree(struct TreeNode* left, struct TreeNode* right){
    if(left==NULL && right==NULL){
        return true;
    }else if(left==NULL && right!=NULL){
        return false;
    }else if(left!=NULL && right==NULL){
        return false;
    }else{
        bool lf, rt;
        lf = checktree(left->left, right->right);
        rt = checktree(left->right, right->left);
        if(left->val==right->val){
            return lf & rt;
        }else{
            return false;
        }
    }
}

bool isSymmetric(struct TreeNode* root) {
    if(root==NULL){
        return true;
    }else{
        return checktree(root->left, root->right);
    }
}