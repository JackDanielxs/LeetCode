/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* res = (int*)malloc(100 * sizeof(int));
    *returnSize = 0;
    struct TreeNode* atual = root;

    while (atual != NULL) {
        if (atual->left == NULL) {
            res[(*returnSize)++] = atual->val;
            atual = atual->right;
        } else {
            struct TreeNode* pre = atual->left;
            while (pre->right != NULL && pre->right != atual) {
                pre = pre->right;
            }
            if (pre->right == NULL) {
                pre->right = atual;
                atual = atual->left;
            } else {
                pre->right = NULL;
                res[(*returnSize)++] = atual->val;
                atual = atual->right;
            }
        }
    }
    return res;
}
