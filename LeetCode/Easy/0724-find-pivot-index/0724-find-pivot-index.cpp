class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int sumLeft = 0;
            for (int j = 0; j < i; j++) {
                sumLeft += nums[j];
            }

            int sumRight = 0;
            for (int j = i + 1; j < nums.size(); j++) {
                sumRight += nums[j];
            }

            if (sumLeft == sumRight) {
                return i;
            }
        }

        return -1;
    }
};