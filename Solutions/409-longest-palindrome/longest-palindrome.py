class Solution:
    def longestPalindrome(self, s: str) -> int:
        letters = {}
        length = 0
        has_single = False

        # Conta quantas vezes cada letra aparece
        for ch in s:
            letters[ch] = letters.get(ch, 0) + 1

        # Soma pares e verifica se sobra uma letra pro meio
        for count in letters.values():
            length += (count // 2) * 2
            if count % 2 == 1:
                has_single = True

        # Se sobrar, pode ir no meio
        return length + 1 if has_single else length
