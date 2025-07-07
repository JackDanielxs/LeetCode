int titleToNumber(char* columnTitle) {
    int result = 0;

    for (int i = 0; columnTitle[i] != '\0'; i++) {
        // Converte o caractere de 'A' a 'Z' para número de 1 a 26
        result = result * 26 + (columnTitle[i] - 'A' + 1);
    }

    return result;
}
