using System;
using System.Collections.Generic;

public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        Dictionary<int, int> dict = new Dictionary<int, int>();

        for (int i = 0; i < nums.Length; i++) {
            int complemento = target - nums[i];

            if (dict.ContainsKey(complemento)) {
                return new int[] { dict[complemento], i };
            }

            dict[nums[i]] = i; // Armazena o número e seu índice original
        }

        return Array.Empty<int>(); // Caso não encontre solução
    }
}
