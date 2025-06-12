public class Solution {
    public int divide(int dividend, int divisor) {
        if (dividend == Integer.MIN_VALUE && divisor == -1) {
            return Integer.MAX_VALUE;
        }

        // Convert both to long and work with positive vals
        long dvd = Math.abs((long) dividend);
        long dvs = Math.abs((long) divisor);

        int result = 0;

        // Subtract divisor multiples using shifts
        while (dvd >= dvs) {
            long temp = dvs;
            int multiple = 1;

            // Double the divisor until it is less than dividend
            while (dvd >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }

            dvd -= temp;
            result += multiple;
        }

        // Determine sign of the result
        return ((dividend < 0) ^ (divisor < 0)) ? -result : result;
    }
}
