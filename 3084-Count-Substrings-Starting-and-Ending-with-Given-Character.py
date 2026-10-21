class Solution:
    def countSubstrings(self, s: str, c: str) -> int:
        prev = 0
        n = len(s)
        ans = 0
        for cr in s:
            if cr != c:
                continue
            ans += prev +1
            prev += 1


        return ans

