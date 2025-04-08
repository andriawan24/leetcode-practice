class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        bool checks[101] = {0};
        int n = nums.size();

        for (int i = n - 1; i >= 0; i--) {
            if (checks[nums[i]]) {
                return ceil(double(i + 1) / 3);
            }
            checks[nums[i]] = true;
        }

        return 0;
    }
};