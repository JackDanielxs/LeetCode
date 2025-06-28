int maxProfit(int* prices, int pricesSize) {
    int* diff = (int*)malloc(pricesSize * sizeof(int));
    for (int i = 1; i < pricesSize; i++) {
        diff[i] = prices[i] - prices[i - 1];
    }

    int maxCurr = 0, maxSoFar = 0;
    for (int i = 1; i < pricesSize; i++) {
        maxCurr = (maxCurr + diff[i] > 0) ? maxCurr + diff[i] : 0;
        if (maxCurr > maxSoFar) maxSoFar = maxCurr;
    }

    free(diff);
    return maxSoFar;
}
