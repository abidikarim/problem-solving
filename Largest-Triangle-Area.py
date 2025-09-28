class Solution:
    def largestTriangleArea(self, points: List[List[int]]) -> float:
        n = len(points)
        ans = 0.0

        for i in range(n):
            for j in range(i + 1, n):
                for k in range(j + 1, n):
                    p = points[i]
                    q = points[j]
                    r = points[k]

                    area = 0.5 * abs( p[0]*(q[1] - r[1]) + q[0]*(r[1] - p[1]) + r[0]*(p[1] - q[1]))
                    ans = max(ans, area)
        return ans
        