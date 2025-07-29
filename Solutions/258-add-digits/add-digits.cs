public class Solution {
    public int AddDigits(int num) {
        // 0 returns 0. Caso contrário, aplica fórmula
        return num == 0 ? 0 : 1 + (num - 1) % 9;
    }
}
