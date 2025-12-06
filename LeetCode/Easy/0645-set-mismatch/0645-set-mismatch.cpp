class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int, int> table;

        int sameValue = 0;
        int mustValue = 0;

        for (const auto num: nums) {
            table[num]++;
        }

        for (int i = 1; i <= nums.size(); i++) {
            if (table[i] == 2) {
                sameValue = i;
            }

            if (table[i] == 0) {
                mustValue = i;
            }
        }

        return { sameValue, mustValue };
    }
};