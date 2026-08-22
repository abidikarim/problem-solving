# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):

    def dfs(self, root, v):
        if root is None:
            return
        if root.left is None and root.right is None:
            v.append(root.val)

        self.dfs(root.left, v)
        self.dfs(root.right, v)

    def leafSimilar(self, root1, root2):
        v1 = []
        v2 = []

        self.dfs(root1, v1)
        self.dfs(root2, v2)

        return v1 == v2
        