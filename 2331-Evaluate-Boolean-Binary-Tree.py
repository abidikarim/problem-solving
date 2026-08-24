# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def evaluateTree(self, root: Optional[TreeNode]) -> bool:
        if root.val == 0:
            return False
        
        if root.val == 1:
            return True

        ops = {
            2: lambda a, b: a or b,
            3: lambda a, b: a and b
        }

        left = self.evaluateTree(root.left)
        right = self.evaluateTree(root.right)

        return ops[root.val](left, right)
        