class Solution:
    def isSubstringPresent(self, s: str) -> bool:
        substrings = []
        n = len(s)

        for i in range(n):
            substrings.append(s[i:i+2])
        

        for i in range(n - 1, 0, -1):
            ch = s[i] + s[i - 1]
            if ch in substrings:
                return True
        
        return False
        