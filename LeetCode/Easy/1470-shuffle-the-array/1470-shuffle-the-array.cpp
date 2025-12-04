class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result(n * 2);

        int x = 0, y = n;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                result[i] = nums[x];
                x++;
            } else {
                result[i] = nums[y];
                y++;
            }
        }

        return result;
    }
};