public class Solution {
    public bool CanWinNim(int n) {
        // Perde se for múltiplo de 4
        return n % 4 != 0;
    }
}
