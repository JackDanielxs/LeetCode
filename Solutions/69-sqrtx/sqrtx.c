int mySqrt(int x) {
    if (x == 0) return 0;
    double guess = x;
    while (guess * guess - x > 1e-6 || x - guess * guess > 1e-6) {
        guess = (guess + x / guess) / 2.0;
    }
    return (int)guess;
}
