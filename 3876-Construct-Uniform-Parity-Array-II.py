class Solution:
    def uniformArray(self, nums: list[int]) -> bool:
        has_even = False
        has_odd = False
        min_odd = float('inf')

        for x in nums:
            if x % 2 == 0:
                has_even = True
            else:
                has_odd = True
                min_odd = min(min_odd, x)
            
        if not has_even or not has_odd:
            return True
        
        for x in nums:
            if x % 2 == 0 and (x - min_odd) < 1:
                return False
        
        return True