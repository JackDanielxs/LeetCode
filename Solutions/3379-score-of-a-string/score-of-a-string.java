class Solution {
    public int scoreOfString(String s) {
        int score = 0;
        int i = 0;
        int aux = 0;
        while(i < s.length() && i + 1 < s.length()){
            aux = s.charAt(i) - s.charAt(i+1);
            score += Math.abs(aux);
            i++;
        }
        return score;
    }
}