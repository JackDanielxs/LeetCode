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
#define MAX_PATH_LEN 1024
#define MAX_RESULT 1000

void buildPaths(struct TreeNode* node, char* path, int pathLen, char** result, int* returnSize) {
    if (!node) return;

    // Adiciona o valor atual ao caminho
    int len = sprintf(path + pathLen, "%d", node->val);
    pathLen += len;

    // Se for folha
    if (!node->left && !node->right) {
        result[*returnSize] = strdup(path);
        (*returnSize)++;
        return;
    }

    // Adiciona "->"
    path[pathLen++] = '-';
    path[pathLen++] = '>';

    // Continua esquerda e direita
    buildPaths(node->left, path, pathLen, result, returnSize);
    buildPaths(node->right, path, pathLen, result, returnSize);
}

char** binaryTreePaths(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    char** result = malloc(MAX_RESULT * sizeof(char*));
    char path[MAX_PATH_LEN];

    buildPaths(root, path, 0, result, returnSize);
    return result;
}
