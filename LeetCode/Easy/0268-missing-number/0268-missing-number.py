class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        seq = [0] * len(nums)

        for num in nums:
            if num != 0:
                seq[num - 1] += 1

        for i in range(len(seq)):
            if seq[i] == 0:
                return i + 1

        return 0