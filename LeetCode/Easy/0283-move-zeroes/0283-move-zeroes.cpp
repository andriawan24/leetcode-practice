class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start = 0, end = 1;

        while (end < nums.size()) {
            if (nums[start] == 0) {
                if (nums[end] == 0) {
                    end++;
                    continue;
                }

                swap(nums[end], nums[start]);
            }

            start++;
            end++;
        }
    }
};