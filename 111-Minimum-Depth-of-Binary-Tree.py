# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def dfs(self, root)-> int :
        if not root:
            return 0

        dl = self.dfs(root.left)
        dr = self.dfs(root.right)

        if not root.left:
            return dr+1
        if not root.right:
            return dl+1
            
        return min(dr, dl) + 1


    def minDepth(self, root: Optional[TreeNode]) -> int:
        return self.dfs(root)
        