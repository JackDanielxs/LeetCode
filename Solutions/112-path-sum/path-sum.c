/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool hasPathSum(struct TreeNode* root, int targetSum) {
    if (!root) return false;

    // Alocação de pilhas para simular travessia DFS iterativa
    struct TreeNode** stack = (struct TreeNode**)malloc(1000 * sizeof(struct TreeNode*));
    int* sumStack = (int*)malloc(1000 * sizeof(int));
    int top = -1;

    // Inicializa pilha com nó raiz e seu valor
    stack[++top] = root;
    sumStack[top] = root->val;

    while (top >= 0) {
        struct TreeNode* node = stack[top];
        int currSum = sumStack[top--];

        // Verifica se é folha e se a soma dos valores corresponde ao alvo
        if (!node->left && !node->right && currSum == targetSum) {
            free(stack);
            free(sumStack);
            return true;
        }

        // Adiciona filho direito à pilha, se existir
        if (node->right) {
            stack[++top] = node->right;
            sumStack[top] = currSum + node->right->val;
        }

        // Adiciona filho esquerdo à pilha, se existir
        if (node->left) {
            stack[++top] = node->left;
            sumStack[top] = currSum + node->left->val;
        }
    }

    // Libera memória das pilhas
    free(stack);
    free(sumStack);
    return false;
}

