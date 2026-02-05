class Solution:
    def constructTransformedArray(self, nums: List[int]) -> List[int]:
        res = [0] * len(nums)

        for i in range(0, len(res)):
            target_i = (i + nums[i]) % len(nums)
            res[i] = nums[target_i]

        return res