class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        col = {}

        for num in nums:
            if num in col:
                return True

            col[num] = 1

        return False