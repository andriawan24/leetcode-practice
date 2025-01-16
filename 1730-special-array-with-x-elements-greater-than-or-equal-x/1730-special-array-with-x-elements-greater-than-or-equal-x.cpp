class Solution {
public:
    int specialArray(vector<int>& nums) {
        // Optimized solution
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int x = 0; x <= n; x++) {
            auto it = lower_bound(nums.begin(), nums.end(), x);
            int count = nums.end() - it;
            if (count == x) {
                return x;
            }
        }

        return -1;
    }
};