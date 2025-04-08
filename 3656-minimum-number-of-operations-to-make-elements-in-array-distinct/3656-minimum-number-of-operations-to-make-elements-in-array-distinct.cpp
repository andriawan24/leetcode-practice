class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int steps = 0, temp;

        while (true) {
            unordered_map<int, int> table;
            temp = 0;
            for (const auto &num: nums) {
                if (++table[num] == 2) temp++;
            }
            if (temp == 0) break;
            nums.erase(nums.begin(), nums.begin() + min(3, (int) nums.size()));
            steps++;
        }

        return steps;
    }
};