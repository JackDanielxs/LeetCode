public class Solution {
    public string AddStrings(string num1, string num2) {
        // Ponteiros para o final das duas strings e vaiUm
        int i = num1.Length - 1, j = num2.Length - 1, carry = 0;
        var result = new List<char>();

        while (i >= 0 || j >= 0 || carry > 0) {
            // Dígito atual de cada string
            int x = i >= 0 ? num1[i] - '0' : 0;
            int y = j >= 0 ? num2[j] - '0' : 0;
            int sum = x + y + carry;

            // Adiciona o último dígito
            result.Add((char)(sum % 10 + '0'));
            carry = sum / 10;

            // Esquerda
            i--;
            j--;
        }

        result.Reverse();
        return new string(result.ToArray());
    }
}
