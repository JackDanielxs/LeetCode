using System;
using System.Collections.Generic;

public class Solution {
    public bool IsValid(string s) {
        Dictionary<char, char> hash = new Dictionary<char, char> {
            { ')', '(' },
            { ']', '[' },
            { '}', '{' }
        };

        Stack<char> stk = new Stack<char>();

        foreach (char c in s) {
            if (!hash.ContainsKey(c)) {
                stk.Push(c);
            } else {
                if (stk.Count == 0 || stk.Pop() != hash[c]) {
                    return false;
                }
            }
        }

        return stk.Count == 0;
    }
}
