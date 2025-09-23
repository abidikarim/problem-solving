class Solution(object):
    def compareVersion(self, version1, version2):
        revision1 = version1.split('.')
        revision2 = version2.split('.')       
        len1, len2 = len(revision1), len(revision2)
        max_len = max(len1, len2)

        for i in range(max_len):
            r1 = int(revision1[i]) if i < len1 else 0
            r2 = int(revision2[i]) if i < len2 else 0

            if r1 < r2 :
                return -1
            elif r1 > r2 :
                return 1

        return 0