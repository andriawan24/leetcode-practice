class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (const auto num: nums) {
            result ^= num;
        }
        return result;
    }
};