/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    // Aloca espaço para o vetor de ponteiros (linhas do triângulo)
    int** triangle = (int**)malloc(numRows * sizeof(int*));
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));
    *returnSize = numRows;

    for (int i = 0; i < numRows; i++) {
        // Cada linha terá i + 1 elementos
        triangle[i] = (int*)malloc((i + 1) * sizeof(int));
        (*returnColumnSizes)[i] = i + 1;

        // O primeiro e o último elemento da linha são sempre 1
        triangle[i][0] = 1;
        triangle[i][i] = 1;

        // Preenche os elementos internos com a soma dos dois elementos acima
        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    return triangle;
}
