class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                result.insert(result.end(), nums[i], nums[i + 1]);
            }
        }

        return result;
    }
};