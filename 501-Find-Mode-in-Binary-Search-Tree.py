# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def dfs(self, root, mp) -> int:
        if root is None:
            return 0

        mp[root.val] += 1
        left_mx = self.dfs(root.left, mp)
        right_mx = self.dfs(root.right, mp)

        return max(mp[root.val], left_mx, right_mx)


    def findMode(self, root: Optional[TreeNode]) -> List[int]:
        occ = defaultdict(int)
        mx = self.dfs(root, occ)
        ans = []

        for key, val in occ.items():
            if val == mx:
                ans.append(key)

        return ans
        