public class Solution {
    public int[] Intersect(int[] nums1, int[] nums2) {
        Dictionary<int, int> contador = new Dictionary<int, int>();
        List<int> resultado = new List<int>();

        // Frequência de cada número
        foreach (int num in nums1) {
            if (!contador.ContainsKey(num))
                contador[num] = 0;
            contador[num]++;
        }

        // números nums2 que estão em nums1
        foreach (int num in nums2) {
            if (contador.ContainsKey(num) && contador[num] > 0) {
                resultado.Add(num);
                contador[num]--; // Evita extras
            }
        }

        return resultado.ToArray();
    }
}
