class Solution:
    def minimumBoxes(self, apple: List[int], capacity: List[int]) -> int:
        sm = sum(apple)
        capacity.sort(reverse = True)
        for i, x in enumerate(capacity):
            sm -= x
            if sm <= 0:
                return i+1
            
        return len(capacity)