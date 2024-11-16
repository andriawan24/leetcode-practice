class Solution {
public:
    vector<int> twoSum(vector<int> nums, int target)  {
        unordered_map<int, int> table;
        
        for (int i = 0; i < nums.size(); i++) {
            if (table.find(target - nums[i]) != table.end()) {
                return { i, table[target - nums[i]] };
            } else {
                table.insert({ nums[i], i });
            }
        }

        return {-1};
    }
};