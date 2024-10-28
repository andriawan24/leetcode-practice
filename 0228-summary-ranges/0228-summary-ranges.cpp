class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return { to_string(nums[0]) };
        if (n == 0) return { };
        
        vector<string> result;
        int end = nums[n-1], last = end;

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] + 1 == last) {
                last = nums[i];
                continue;
            }

            if (last == end) {
                result.insert(result.begin(), to_string(last));
            } else {
                result.insert(result.begin(), to_string(last) + "->" + to_string(end));
            }
            end = nums[i];
            last = nums[i];
        }

if (last == end) {
                result.insert(result.begin(), to_string(last));
            } else {
                result.insert(result.begin(), to_string(last) + "->" + to_string(end));
            }

        return result;
    }
};