class Solution:
    def toHex(self, num: int) -> str:
        # 0 retorna 0
        if num == 0:
            return "0"

        hex_chars = "0123456789abcdef"
        resultado = []

        # Máscara p/ negativos
        num &= 0xFFFFFFFF

        while num > 0:
            # Últimos 4 bits
            digito = num & 0xF
            resultado.append(hex_chars[digito])
            # Desloca 4 bits pra direita
            num >>= 4

        return "".join(reversed(resultado))
