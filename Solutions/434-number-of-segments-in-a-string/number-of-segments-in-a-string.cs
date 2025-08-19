public class Solution {
    public int CountSegments(string s) {
        List<string> lista = s.Split(' ').ToList();
        lista = lista.Where(s => s != " " && s != "").ToList();
        return lista.Count();
    }
}