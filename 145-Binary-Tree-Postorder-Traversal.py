# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def dfs(self, root, v):
        if root is None:
            return None
        self.dfs(root.left, v)
        self.dfs(root.right, v)
        v.append(root.val)
    def postorderTraversal(self, root):
        v = []
        self.dfs(root, v)
        return v
        