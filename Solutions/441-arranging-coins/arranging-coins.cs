public class Solution {
    public int ArrangeCoins(int n) {
        long left = 0, right = n;

        while (left <= right) {
            long mid = left + (right - left) / 2;
            long totalCoins = mid * (mid + 1) / 2; // Soma dos primeiros mid

            if (totalCoins == n) 
                return (int)mid; // Exatamente
            else if (totalCoins < n) 
                left = mid + 1; // Continua
            else 
                right = mid - 1; // Volta
        }
        return (int)right;
    }
}
