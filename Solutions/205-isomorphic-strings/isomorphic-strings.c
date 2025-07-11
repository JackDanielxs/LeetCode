bool isIsomorphic(char* s, char* t) {
    // Mapas para armazenar a correspondência de caracteres de st e ts
    char mapST[256] = {0};
    char mapTS[256] = {0};

    for (int i = 0; s[i]; i++) {
        // Se ainda não houve mapeamento para os caracteres atuais
        if (mapST[(unsigned char)s[i]] == 0 && mapTS[(unsigned char)t[i]] == 0) {
            // Mapeia
            mapST[(unsigned char)s[i]] = t[i];
            mapTS[(unsigned char)t[i]] = s[i];
        } else {
            // Verifica se é consistente
            if (mapST[(unsigned char)s[i]] != t[i] || mapTS[(unsigned char)t[i]] != s[i])
                return false; // mapeamento inválido = não isomórfico
        }
    }

    return true;
}
