class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long result = 0;
        long long current_sum = 0;
        unordered_set<int> elements;
        int start = 0;

        for (int end = start; end < nums.size(); end++) {
            if (elements.find(nums[end]) == elements.end()) {
                current_sum += nums[end];
                elements.insert(nums[end]);

                if (end - start + 1 == k) {
                    result = max(current_sum, result);
                    current_sum -= nums[start];
                    elements.erase(nums[start]);
                    start++;
                }
            } else {
                while (nums[start] != nums[end]) {
                    current_sum -= nums[start];
                    elements.erase(nums[start]);
                    start++;
                }
                start++;
            }
        }

        return result;
    }
};