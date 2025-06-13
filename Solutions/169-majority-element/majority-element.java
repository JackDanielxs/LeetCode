class Solution {
    public int majorityElement(int[] nums) {
        Arrays.sort(nums);
        int reps = 1;
        int maxreps = 0;
        int n = 0;
        for(int i = 0; i < nums.length; i++){
            if(i != nums.length - 1 && nums[i] == nums[i+1])
                reps++;
            else
                reps = 1;

            if(reps > maxreps){
                maxreps = reps;
                n = nums[i];
            }
        }
        return n;
    }
}