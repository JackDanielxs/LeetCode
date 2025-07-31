public class Solution {
    public int[] CountBits(int n) {
        // Quantidade de '1'
        int[] contagemBits = new int[n + 1];

        for (int i = 1; i <= n; i++) {
            // A quantidade de 1s em i é igual à de i / 2 (i >> 1) + 1 se o último bit for 1 (i & 1)
            contagemBits[i] = contagemBits[i >> 1] + (i & 1);
        }
        return contagemBits;
    }
}
