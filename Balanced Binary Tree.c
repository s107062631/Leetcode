/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool tmp;
int countdepth(struct TreeNode* root){
    if(root==NULL){
        return 0;
    }else{
        int left, right;
        left = countdepth(root->left);
        right = countdepth(root->right);
        if(left-right>1 || left-right<-1){
            tmp = false;
        }
        if(left>right){
            return left+1;
        }else{
            return right+1;
        }
    }
}

bool isBalanced(struct TreeNode* root) {
    tmp=true;
    if(root==NULL){
        return true;
    }
    countdepth(root);
    return tmp;
}