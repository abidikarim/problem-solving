class Solution:
    def shortestSubstrings(self, arr: List[str]) -> List[str]:
        substrings_per_string = {}

        for s in arr:
            substrings_per_string[s] = set()
            n = len(s)

            for i in range(n):
                ch = ""
                for j in range(i, n):
                    ch += s[j]
                    substrings_per_string[s].add(ch)
        ans = []

        for i, s in enumerate(arr):
            found = False
            substrings = sorted(substrings_per_string[s], key= lambda x:(len(x), x))

            for sub in substrings:
                exist = False

                for j, s1 in enumerate(arr):
                    if i != j and sub in substrings_per_string[s1]:
                        exist = True
                        break

                if not exist:
                    ans.append(sub)
                    found = True
                    break

            if not found:
                ans.append("")

        return ans