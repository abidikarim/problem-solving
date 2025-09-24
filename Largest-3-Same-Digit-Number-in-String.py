class Solution:
    def largestGoodInteger(self, num: str) -> str:
        same_digits_numbers = ["999","888","777","666","555","444","333","222","111","000"]

        for s in same_digits_numbers:
            if s in num:
                return s
        return ""