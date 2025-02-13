class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sumSingle = 0;
        int sumDouble = 0;

        for (auto num: nums) {
            if (num < 10) sumSingle += num;
            else sumDouble += num;
        }

        return sumSingle != sumDouble;
    }
};