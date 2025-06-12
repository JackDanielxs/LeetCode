class Solution {
    public int myAtoi(String s) {
        if (s == null || s.isEmpty()) return 0;

        int i = 0, n = s.length();
        while (i < n && s.charAt(i) == ' ') {
            i++;
        }

        if (i == n) return 0;

        int sinal = 1;
        if (s.charAt(i) == '+' || s.charAt(i) == '-') {
            sinal = (s.charAt(i) == '-') ? -1 : 1;
            i++;
        }

        long resultado = 0;
        while (i < n && Character.isDigit(s.charAt(i))) {
            int digito = s.charAt(i) - '0';
            resultado = resultado * 10 + digito;

            if (sinal == 1 && resultado > Integer.MAX_VALUE) {
                return Integer.MAX_VALUE;
            } else if (sinal == -1 && -resultado < Integer.MIN_VALUE) {
                return Integer.MIN_VALUE;
            }

            i++;
        }

        return (int)(sinal * resultado);
    }
}