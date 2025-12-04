class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result(n * 2);

        int start = 0;
        for (int i = 0; i < n; i++) {
            result[start] = nums[i];
            result[start + 1] = nums[i + n];
            start += 2;
        }

        return result;
    }
};