public class Solution {
    public int FindContentChildren(int[] g, int[] s) {
        Array.Sort(g); // Crianças
        Array.Sort(s); // Cookies

        int i = 0, j = 0, count = 0;

        while (i < g.Length && j < s.Length) {
            if (s[j] >= g[i]) {
                count++; // Ok
                i++;
                j++;
            } else {
                j++; // Proximo
            }
        }

        return count;
    }
}
