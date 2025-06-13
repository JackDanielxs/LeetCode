int findClosestNumber(int* nums, int numsSize) {
    int closest = nums[0];
    for (int i = 1; i < numsSize; i++) {
        int curr = nums[i];
        if (abs(curr) < abs(closest) || (abs(curr) == abs(closest) && curr > closest)) {
            closest = curr;
        }
    }
    return closest;
}