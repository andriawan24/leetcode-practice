class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        countMags = Counter(magazine)

        for ch in ransomNote:
            if ch not in countMags or countMags[ch] <= 0:
                return False

            countMags[ch] -= 1

        return True