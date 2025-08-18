public class Solution {
    public int ThirdMax(int[] nums) {
        var distinct = nums.Distinct().OrderByDescending(x => x).ToList();
        if (distinct.Count < 3)
            return distinct[0];
        return distinct[2];
    }
}
