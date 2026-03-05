class Solution:
    def minOperations(self, s: str) -> int:
        count_a = 0
        count_b = 0

        for i in range(0, len(s)):
            if i % 2 == 0 and s[i] != "0":
                count_a += 1
            elif i % 2 != 0 and s[i] != "1":
                count_a += 1

        for i in range(0, len(s)):
            if i % 2 == 0 and s[i] != "1":
                count_b += 1
            elif i % 2 != 0 and s[i] != "0":
                count_b += 1

        return count_a if count_a < count_b else count_b