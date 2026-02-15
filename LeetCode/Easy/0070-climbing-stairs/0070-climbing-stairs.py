class Solution:
    def climbStairs(self, n: int) -> int:
        table = [0] * (n + 1)
        table[0] = 1
        table[1] = 2

        for i in range(2, n):
            table[i] = table[i - 1] + table[i - 2]

        return table[-2]