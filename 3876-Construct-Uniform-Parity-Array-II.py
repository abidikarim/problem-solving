class Solution:
    def uniformArray(self, nums: list[int]) -> bool:
        is_all_odd = True
        is_all_even = True

        for x in nums:
            if x % 2 != 0:
                is_all_even = False
                break
        
        for x in nums:
            if x % 2 == 0:
                is_all_odd = False
                break
        
        if is_all_even or is_all_odd:
            return True
        

        min_odd = 1e9
        if not is_all_odd:
            for x in nums:
                if x % 2 != 0 and x < min_odd:
                    min_odd = x

        for x in nums:
            if x % 2 == 0 and (x - min_odd) < 1:
                return False
        
        return True