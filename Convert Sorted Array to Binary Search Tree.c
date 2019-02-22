/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* split(int* nums, int front, int last){
    if(front<=last){
        struct TreeNode* root;
        int mid=(last+front)/2;
        printf("%d %d %d\n", front, last, nums[mid]);
        root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        root->left = split(nums, front, mid-1);
        root->right = split(nums, mid+1, last);
        root->val = nums[mid];
        return root;
    }else{
        return NULL;
    }
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    return split(nums, 0, numsSize-1);
}