# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getSum(self, root: TreeNode, isLeft: bool)-> int :
            if not root.left and not root.right:
                return root.val if isLeft else 0
            ans = 0
            for child, flag in [(root.left, True), (root.right, False)]:
                if child:
                    ans += self.getSum(child, flag)
            return ans
    def sumOfLeftLeaves(self, root: Optional[TreeNode]) -> int:
            return self.getSum(root, False)
    
        