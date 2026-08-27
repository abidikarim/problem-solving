class Solution:
    def shortestBeautifulSubstring(self, s: str, k: int) -> str:
        n = len(s)
        i = 0
        ones = 0
        ans = ""

        for j in range(n):
            if s[j] == '1':
                ones += 1

            while ones > k:
                if s[i] == '1':
                    ones -= 1
                i += 1

            if ones == k:
                while s[i] == '0':
                    i += 1

                current = s[i:j + 1]

                if not ans or len(current) < len(ans) or (len(current) == len(ans) and current < ans):
                    ans = current

        return ans