class Solution {
    public int reverse(int x) {
        String str = "";
        int i = 0, rev;

        if(x == 0){
            return 0;
        }
        else if(x < 0){
            str = "-";
            x *= -1;
        }

        while(x != 0){
            str += String.valueOf(x % 10);
            i++;
            x /= 10;
        }
        try{
            return Integer.parseInt(str);
        }catch(NumberFormatException e){
            return 0;
        }
    }
}



