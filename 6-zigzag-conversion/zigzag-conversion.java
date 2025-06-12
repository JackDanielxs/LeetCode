class Solution {
    public String convert(String s, int numRows) {
        if (numRows == 1 || s.length() <= numRows) {
            return s;
        }

        StringBuilder[] linhas = new StringBuilder[numRows];
        for (int i = 0; i < numRows; i++) {
            linhas[i] = new StringBuilder();
        }

        int indiceLinha = 0;
        boolean descendo = false;

        for (char c : s.toCharArray()) {
            linhas[indiceLinha].append(c);

            if (indiceLinha == 0 || indiceLinha == numRows - 1) {
                descendo = !descendo;
            }

            indiceLinha += descendo ? 1 : -1;
        }

        StringBuilder resultado = new StringBuilder();
        for (StringBuilder linha : linhas) {
            resultado.append(linha);
        }

        return resultado.toString();
    }
}