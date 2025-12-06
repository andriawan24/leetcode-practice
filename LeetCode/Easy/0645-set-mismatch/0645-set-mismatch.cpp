class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int duplicated = 0;
        int missing = 0;

        vector<int> v(nums.size() + 1, 0);

        for (int i = 0; i < nums.size(); i++) {
            v[nums[i]]++;
        }

        for (int i = 1; i <= nums.size(); i++) {
            if (v[i] == 2) {
                duplicated = i;
            }

            if (v[i] == 0) {
                missing = i;
            }
        }

        return { duplicated, missing };
    }
};