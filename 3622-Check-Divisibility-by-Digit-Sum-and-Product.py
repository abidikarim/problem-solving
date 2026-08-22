class Solution:
    def checkDivisibility(self, n: int) -> bool:
        p = 1
        s = 0
        for c in str(n):
            p *= int(c)
            s += int(c)
        return n % (p+s) == 0
        