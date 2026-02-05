class Solution:
    def constructTransformedArray(self, nums: List[int]) -> List[int]:
        res = []
        n = len(nums)

        for i in range(0, n):
            target_i = (i + nums[i]) % n
            res.append(nums[target_i])

        return res