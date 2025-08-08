# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def sumOfLeftLeaves(self, root):
        if not root:
            return 0 # Árvore vazia

        def depthFirstSearch(node, is_left):
            if not node:
                return 0 # Não soma
            if not node.left and not node.right and is_left:
                return node.val # Soma se encontrar
            return depthFirstSearch(node.left, True) + depthFirstSearch(node.right, False)

        return depthFirstSearch(root, False)
        