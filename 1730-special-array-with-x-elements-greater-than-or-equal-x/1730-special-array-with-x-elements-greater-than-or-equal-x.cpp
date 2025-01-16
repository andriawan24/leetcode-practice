class Solution {
public:
    int specialArray(vector<int>& nums) {
        int x = nums.size();

        while (x >= 0) {
            int count = 0;
            for (int num: nums) {
                if (num >= x) {
                    count++;
                }
            }

            if (count == x) {
                return x;
            }

            x--;
        }

        return x;
    }
};