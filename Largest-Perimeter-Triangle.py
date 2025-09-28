class Solution:
    def largestPerimeter(self, nums: List[int]) -> int:
        ans = 0
        n = len(nums)
        nums.sort()
        for i in range(n-3, -1, -1):
            if nums[i] + nums[i+1] > nums[i+2]:
                return nums[i] + nums[i+1] + nums[i+2]
            
        return ans
        