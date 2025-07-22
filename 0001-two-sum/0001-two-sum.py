class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        start_index = 0
        end_index = 0

        for i in range(0, len(nums)):
            for j in range(0, len(nums)):
                if i != j and nums[i] + nums[j] == target:
                    start_index = i
                    end_index = j
                    break
        
        return [start_index, end_index]