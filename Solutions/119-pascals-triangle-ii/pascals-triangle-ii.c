/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* getRow(int rowIndex, int* returnSize) {
    *returnSize = rowIndex + 1;
    int* row = (int*)malloc((*returnSize) * sizeof(int));
    
    row[0] = 1;
    for (int i = 1; i <= rowIndex; i++) {
        // C(n, k) = C(n, k - 1) * (n - k + 1) / k
        unsigned long long val = (unsigned long long)row[i - 1];
        val = val * (rowIndex - i + 1) / i;
        row[i] = (int)val;
    }
    return row;
}

