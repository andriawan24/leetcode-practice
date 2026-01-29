class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> table;

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];

            if (table.contains(diff)) {
                return { table[diff], i };
            }

            table[nums[i]] = i;
        }

        return {};
    }
};