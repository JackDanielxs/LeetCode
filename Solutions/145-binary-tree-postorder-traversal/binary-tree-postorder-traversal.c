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
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int* res = (int*)malloc(100 * sizeof(int));
    *returnSize = 0;

    struct TreeNode* stack[100];
    int top = -1;

    // Ponteiro para último nó visitado
    struct TreeNode* lastVisited = NULL;
    struct TreeNode* curr = root;

    while (curr || top >= 0) {
        if (curr) {
            // Vai mais à esquerda possível
            stack[++top] = curr;
            curr = curr->left;
        } else {
            struct TreeNode* peekNode = stack[top];

            // Se houver filho direito ainda não visitado
            if (peekNode->right && lastVisited != peekNode->right) {
                curr = peekNode->right;
            } else {
                // visita o nó do topo
                res[(*returnSize)++] = peekNode->val;
                lastVisited = stack[top--]; // remove o nó da pilha
            }
        }
    }

    return res;
}
