class Solution:
    def numWaterBottles(self, n: int, x: int) -> int:
        r = 0
        ans = n
        while n >= x:
            ans += n // x
            r = n % x
            n = n // x + r

        return ans 

        