class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        count = {}

        for num in nums:
            count[num] = 1 if num not in count else count[num] + 1
            if count[num] > len(nums) / 2:
                return num

        return 0