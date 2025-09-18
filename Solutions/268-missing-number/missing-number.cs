public class Solution {
    public int MissingNumber(int[] nums) {
        int n = nums.Length;
        int certo = n * (n + 1) / 2;
        int real = nums.Sum();
        return certo - real;
    }
}
