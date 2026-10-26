class Solution:
    def maximumLengthSubstring(self, s: str) -> int:
        chars = {}
        left = 0
        ans = 0

        for right, c in enumerate(s):
            chars[c] = chars.get(c, 0) + 1
            while chars[c] > 2:
                chars[s[left]] -= 1
                left += 1

            ans = max(ans, right-left+1)
            
        return ans
        