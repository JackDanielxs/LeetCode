int digitSquareSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += (n % 10) * (n % 10);
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    // Floyd
    int slow = n, fast = digitSquareSum(n);
    while (fast != 1 && slow != fast) {
        slow = digitSquareSum(slow);                 // avança 1 passo
        fast = digitSquareSum(digitSquareSum(fast)); // avança 2 passos
    }
    return fast == 1;
}
