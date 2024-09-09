class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       unordered_map<int, int> counts;

       for (int i = 0; i < nums.size(); i++) {
            if (counts.count(nums[i]) > 0) {
                if (abs(counts[nums[i]] - i) <= k) {
                    return true;
                } else {
                    counts[nums[i]] = i;
                }
            } else {
                counts[nums[i]] = i;
            }
       } 

       return false;
    }
};