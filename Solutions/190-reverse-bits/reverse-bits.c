uint32_t reverseBits(uint32_t n) {
    // Troca bits de posição em blocos progressivos
    n = ((n >> 1) & 0x55555555) | ((n & 0x55555555) << 1);  // troca pares de bits
    n = ((n >> 2) & 0x33333333) | ((n & 0x33333333) << 2);  // troca blocos de 2 bits
    n = ((n >> 4) & 0x0F0F0F0F) | ((n & 0x0F0F0F0F) << 4);  // troca .. de 4 bits
    n = ((n >> 8) & 0x00FF00FF) | ((n & 0x00FF00FF) << 8);  // troca .. de 8 bits
    n = (n >> 16) | (n << 16);                              // troca metades de 16 bits
    return n;
}
