char* convertToTitle(int columnNumber) {
    char* res = (char*)malloc(10);
    char* ptr = res + 9; // ponteiro começa no final
    *ptr = '\0';         // null-terminator

    // Preenche de trás pra frente
    while (columnNumber) {
        *(--ptr) = 'A' + (--columnNumber % 26);  // ajustar para 0-based e converte
        columnNumber /= 26;
    }

    return ptr;
}
