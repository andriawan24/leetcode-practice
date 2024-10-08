class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2, 0);

        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i != j && nums[i] + nums[j] == target) {
                    result[0] = i;
                    result[1] = j;
                }
            }
        }

        return result;
    }
};