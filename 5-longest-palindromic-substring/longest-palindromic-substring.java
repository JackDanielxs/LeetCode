class Solution {
    public String longestPalindrome(String s) {
        if (s == null || s.length() < 1) return "";

        int inicio = 0, fim = 0;

        for (int i = 0; i < s.length(); i++) {
            int len1 = expandirCentro(s, i, i);
            int len2 = expandirCentro(s, i, i + 1);
            int len = Math.max(len1, len2);

            if (len > fim - inicio) {
                inicio = i - (len - 1) / 2;
                fim = i + len / 2;
            }
        }

        return s.substring(inicio, fim + 1);
    }

    private static int expandirCentro(String s, int esquerda, int direita) {
        while (esquerda >= 0 && direita < s.length() && s.charAt(esquerda) == s.charAt(direita)) {
            esquerda--;
            direita++;
        }
        return direita - esquerda - 1;
    }

}