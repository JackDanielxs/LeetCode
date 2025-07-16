/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode invertTree(TreeNode root) {
        if (root == null) return null;

        // Cria novo nó com o mesmo valor do nó original
        TreeNode newRoot = new TreeNode(root.val);

        // Inverte recursivamente os filhos
        newRoot.left = invertTree(root.right);
        newRoot.right = invertTree(root.left);

        return newRoot;
    }
}
