public class Solution {
    public String reverseWords(String s) {
        StringBuilder result = new StringBuilder();
        int end = s.length(), i = end - 1;

        while (i >= 0) {
            while (i >= 0 && s.charAt(i) == ' ') i--;  // skip spaces
            end = i + 1;
            while (i >= 0 && s.charAt(i) != ' ') i--;  // find word start
            int start = i + 1;

            if (start < end) {
                if (result.length() > 0) result.append(' ');
                result.append(s.substring(start, end));
            }
        }

        return result.toString();
    }
}
