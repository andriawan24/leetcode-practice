class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        countRansom = {}
        countMags = {}

        for ch in ransomNote:
            if ch not in countRansom:
                countRansom[ch] = 1
            else:
                countRansom[ch] += 1

        for ch in magazine:
            if ch not in countMags:
                countMags[ch] = 1
            else:
                countMags[ch] += 1

        for ch in countRansom:
            if ch not in countMags:
                return False

            if countMags[ch] < countRansom[ch]:
                return False

        return True