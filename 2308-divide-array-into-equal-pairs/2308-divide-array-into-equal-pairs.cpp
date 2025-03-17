class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int, int> table;

        for (auto const &num: nums) {
            table[num]++;
        }

        for (auto const &value: table) {
            if (value.second % 2 != 0) return false;
        }

        return true;
    }
};