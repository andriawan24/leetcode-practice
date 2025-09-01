class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for (auto num: nums) {
            if (count(nums.begin(), nums.end(), num) > nums.size() / 2) {
                return num;
            }
        }
        return 0;
    }
};