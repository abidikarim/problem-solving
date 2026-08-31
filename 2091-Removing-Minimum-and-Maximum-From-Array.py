class Solution:
    def minimumDeletions(self, nums: List[int]) -> int:
        index_min = nums.index(min(nums))
        index_max = nums.index(max(nums))

        n = len(nums)

        mx = max(index_min, index_max)
        mn = min(index_min, index_max)

        left = mx + 1
        right = n - mn
        both = mn + 1 + n - mx    

        return min(left, right, both)