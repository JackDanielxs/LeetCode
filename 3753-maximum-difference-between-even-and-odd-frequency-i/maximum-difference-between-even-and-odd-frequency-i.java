class Solution {
    public int maxDifference(String s) {
        int[] freq = new int[26];
        for (char ch : s.toCharArray()) {
            freq[ch - 'a']++;
        }

        int maxOdd = 0;
        int minEven = s.length();

        for (int f : freq) {
            if (f == 0) continue;
            if ((f & 1) == 1) {
                maxOdd = Math.max(maxOdd, f);
            } else {
                minEven = Math.min(minEven, f);
            }
        }

        return maxOdd == 0 || minEven == s.length() ? 0 : maxOdd - minEven;
    }
}
