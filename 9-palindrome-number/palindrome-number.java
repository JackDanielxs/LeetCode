class Solution {
    public boolean isPalindrome(int x) {
        String str = String.valueOf(x);
        char[] ca = str.toCharArray();
        for(int i = 0; i < ca.length; i++){
            int j = ca.length - 1 - i;
            if(i < j){
                if(ca[i] != ca[j])
                    return false;
            }
        }
        return true;
    }
}