public class Solution {
    public IList<int> FindDisappearedNumbers(int[] nums) {
        // Colocando na posição certa
        for (int i = 0; i < nums.Length; i++) {
            while (nums[i] != nums[nums[i] - 1]) {
                int temp = nums[i];
                nums[i] = nums[temp - 1];
                nums[temp - 1] = temp;
            }
        }

        var result = new List<int>();
        for (int i = 0; i < nums.Length; i++) {
            if (nums[i] != i + 1)
                result.Add(i + 1); // Diferente
        }

        return result;
    }
}
