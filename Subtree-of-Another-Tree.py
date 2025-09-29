# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def compare(self, root:TreeNode, subRoot:TreeNode) -> bool:
        if not root and not subRoot:
            return True
        elif root and subRoot:
            return root.val == subRoot.val and self.compare(root.left, subRoot.left) and self.compare(root.right, subRoot.right)
        return False

    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        ans = self.compare(root, subRoot)

        if root.left:
            ans |= self.isSubtree(root.left, subRoot)
        if root.right:
            ans |= self.isSubtree(root.right, subRoot)
        return ans
        