class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();

        if (n == 0) return {};

        vector<string> result;
        int end = nums[n-1], start = end;

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] + 1 == start) {
                start = nums[i];
                continue;
            }

            insert(start, end, result);
            
            // Reset
            start = nums[i];
            end = nums[i];
        }

        if (n > 0) insert(start, end, result);

        return result;
    }

    void insert(int start, int end, vector<string>& result) {
        if (start == end) {
            result.insert(result.begin(), to_string(start));
        } else {
            string text = to_string(start) + "->" + to_string(end);
            result.insert(result.begin(), text);
        }
    }
};