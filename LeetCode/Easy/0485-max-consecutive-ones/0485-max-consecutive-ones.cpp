class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0;
        int currentMax = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                currentMax++;
            } else {
                res = max(currentMax, res);
                currentMax = 0;
            }
        }

        // For last checking
        res = max(currentMax, res);

        return res;
    }
};