class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> n(nums.size() + 1, -1);
        for (const auto &num: nums) {
            n[num]++;
        }

        vector<int> result;
        for (int i = 1; i < nums.size() + 1; i++) {
            if (n[i] == -1) {
                result.push_back(i);
            }
        }

        return result;
    }
};