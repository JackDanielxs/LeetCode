class Solution {
    public int lengthOfLongestSubstring(String s) {
        int esq = 0, dir = 0, max = 0;
        HashSet<Character> visto = new HashSet<>();

        while (dir < s.length()) {
            char atual = s.charAt(dir);
            if (!visto.contains(atual)) {
                visto.add(atual);
                max = Math.max(max, dir - esq + 1);
                dir++;
            } else {
                visto.remove(s.charAt(esq));
                esq++;
            }
        }

        return max;
    }
}