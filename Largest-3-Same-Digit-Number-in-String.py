class Solution:
    def largestGoodInteger(self, num: str) -> str:
        # same_digits_numbers = ["999","888","777","666","555","444","333","222","111","000"]
        # for s in same_digits_numbers:
        #     if s in num:
        #         return s
        # return ""
        max_digit = ""

        for i in range(len(num) -2):
            if num[i] == num[i+1] and num[i] == num[i+2]:
                max_digit = max(max_digit, num[i])

        return max_digit * 3
