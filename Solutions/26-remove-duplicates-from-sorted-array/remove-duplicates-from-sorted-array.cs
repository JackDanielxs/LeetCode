public class Solution {
    public int RemoveDuplicates(int[] nums) {
        int n = nums.Length;
        int j = 1;
        for(int i = 1; i < n; i++){
            if(nums[i] != nums[i-1]){
                nums[j] = nums[i];
                j++;
            }
        }
    return j;
    }
}