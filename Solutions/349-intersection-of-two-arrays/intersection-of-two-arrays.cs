public class Solution {
    public int[] Intersection(int[] nums1, int[] nums2) {
        HashSet<int> conjuntoNums1 = new HashSet<int>(nums1);

        // Aparecem em ambos
        HashSet<int> intersecao = new HashSet<int>();

        // Verifica se o número está no primeiro
        foreach (int num in nums2) {
            if (conjuntoNums1.Contains(num)) {
                intersecao.Add(num);
            }
        }

        return intersecao.ToArray();
    }
}
