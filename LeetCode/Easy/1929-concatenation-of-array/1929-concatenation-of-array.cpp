class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result(nums);
        
        for (const auto &num: nums) {
            result.push_back(num);
        }

        return result;
    }
};