public class Solution {
    public int HammingDistance(int x, int y) {
        int xor = x ^ y;
        // Função interna que já conta bits true
        return System.Numerics.BitOperations.PopCount((uint)xor);
    }
}
