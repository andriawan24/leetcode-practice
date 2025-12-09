class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int, int> table;
        vector<int> result;

        for (const auto &num: nums) {
            table[num]++;
        }

        for (int i = 1; i <= nums.size(); i++) {
            if (table[i] == 0) {
                result.push_back(i);
            }
        }

        return result;
    }
};