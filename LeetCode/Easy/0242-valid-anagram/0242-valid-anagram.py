class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        table = {}

        for i in s:
            if i in table:
                table[i] += 1
            else:
                table[i] = 1

        for i in t:
            if i not in table or table[i] == 0:
                return False

            table[i] -= 1

        return True