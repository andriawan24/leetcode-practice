class Solution {
public:
    vector<int> twoSum(vector<int> nums, int target)  {
        unordered_map<int, int> table;
        
        for (int i = 0; i < nums.size(); i++) {
            int y = target - nums[i];
            if (table.find(y) != table.end()) {
                return { i, table[y] };
            }
            table[nums[i]] = i;
        }

        return {-1};
    }
};