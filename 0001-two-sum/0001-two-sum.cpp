class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> diff_table;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (diff_table.find(diff) != diff_table.end()) {
                return {i, diff_table[diff]};
            }
            diff_table[nums[i]] = i;
        }
        return {};
    }
};