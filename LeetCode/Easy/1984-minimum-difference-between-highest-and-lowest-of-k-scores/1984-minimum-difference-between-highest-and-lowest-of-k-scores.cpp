class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if (k == 1) return 0;

        int n = nums.size();
        sort(nums.begin(), nums.end());

        int res = INT_MAX;

        for (int i = 0; i <= n - k; i++) {
            int diff = nums[i + k - 1] - nums[i];
            res = min(res, diff);
        }

        return res;
    }
};