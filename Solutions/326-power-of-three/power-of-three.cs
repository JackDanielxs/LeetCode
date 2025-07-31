public class Solution {
    public bool IsPowerOfThree(int n) {
        // 3^19
        return n > 0 && 1162261467 % n == 0;
    }
}
