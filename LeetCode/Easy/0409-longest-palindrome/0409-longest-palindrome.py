class Solution:
    def longestPalindrome(self, s: str) -> int:
        table = {}
        length = 0

        for i in s:
            if i in table:
                table[i] += 1
            else:
                table[i] = 1

        has_odd = False
        for key, val in table.items():
            if val % 2 == 0:
                length += val
            else:
                length += (val - 1)
                has_odd = True

        return length if not has_odd else length + 1

        