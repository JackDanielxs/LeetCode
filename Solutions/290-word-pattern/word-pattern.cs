public class Solution {
    public bool WordPattern(string pattern, string s) {
        string[] palavras = s.Split(' ');

        // Se qtd de letras e palavras não bater, já era
        if (pattern.Length != palavras.Length) return false;

        // Associar letra - palavra e palavra - letra
        Dictionary<char, string> letraParaPalavra = new();
        Dictionary<string, char> palavraParaLetra = new();

        for (int i = 0; i < pattern.Length; i++) {
            char letra = pattern[i];
            string palavra = palavras[i];

            // Já existe um mapeamento letra - palavra
            if (letraParaPalavra.ContainsKey(letra)) {
                // Se não for o mesmo
                if (letraParaPalavra[letra] != palavra)
                    return false;
            } else {
                letraParaPalavra[letra] = palavra;
            }

            // Mapeamento palavra - letra
            if (palavraParaLetra.ContainsKey(palavra)) {
                if (palavraParaLetra[palavra] != letra)
                    return false;
            } else {
                palavraParaLetra[palavra] = letra;
            }
        }

        return true;
    }
}
