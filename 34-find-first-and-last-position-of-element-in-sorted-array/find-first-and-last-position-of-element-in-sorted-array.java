public class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] result = {-1, -1};
        int left = binarySearch(nums, target, true);
        int right = binarySearch(nums, target, false) - 1;

        if (left <= right && right < nums.length && nums[left] == target && nums[right] == target) {
            result[0] = left;
            result[1] = right;
        }

        return result;
    }

    private int binarySearch(int[] nums, int target, boolean findFirst) {
        int left = 0, right = nums.length;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > target || (findFirst && nums[mid] == target)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
}
