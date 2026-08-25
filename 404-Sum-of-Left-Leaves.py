# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumOfLeftLeaves(self, root: Optional[TreeNode], isLeft: bool = False) -> int:
        if not root:
            return 0
            
        if not root.left and not root.right:
            return root.val if isLeft else 0

        s = 0
        s += self.sumOfLeftLeaves(root.left, True) + self.sumOfLeftLeaves(root.right, False)

        return s

        