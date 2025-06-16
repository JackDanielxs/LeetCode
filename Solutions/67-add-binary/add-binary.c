#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* addBinary(const char* a, const char* b) {
    int lenA = strlen(a), lenB = strlen(b);
    int maxLen = lenA > lenB ? lenA : lenB;
    
    char* result = (char*)malloc(maxLen + 2);
    result[maxLen + 1] = '\0';

    int i = lenA - 1, j = lenB - 1, k = maxLen, carry = 0;

    while (k >= 0) {
        int bitA = (i >= 0) ? a[i--] - '0' : 0;
        int bitB = (j >= 0) ? b[j--] - '0' : 0;
        int sum = bitA + bitB + carry;
        result[k--] = (sum % 2) + '0';
        carry = sum / 2;
    }

    if (result[0] == '0') {
        memmove(result, result + 1, maxLen + 1);
    }

    return result;
}
