/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int DFS(struct TreeNode* root, int depth){
    if(root==NULL){
        return depth-1;
    }
    int right=DFS(root->right, depth+1), left=DFS(root->left, depth+1);
    if(right>left){
        return right;
    }else{
        return left;
    }
}

int maxDepth(struct TreeNode* root) {
    return DFS(root, 1);
}