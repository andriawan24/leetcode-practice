class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       map<int, int> counts;

       for (int i = 0; i < nums.size(); i++) {
            if (counts.count(nums[i]) > 0) {
                int result = abs(counts[nums[i]] - i);
                if (result <= k) {
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