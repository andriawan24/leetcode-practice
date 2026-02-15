class Solution:
    def climbStairs(self, n: int) -> int:
        if n <= 2:
            return n

        a = 0
        b = 1
        res = 0

        for i in range(n):
            res = a + b
            a = b
            b = res
            print("Res", a, b, res)

        return res