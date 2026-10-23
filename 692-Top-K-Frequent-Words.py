class Solution:
    def topKFrequent(self, words: list[str], k: int) -> list[str]:
        occ_per_string = Counter(words)

        sorted_words = sorted(
            occ_per_string.keys(), 
            key = lambda word: (-occ_per_string[word], word)
        )


        return sorted_words[:k]