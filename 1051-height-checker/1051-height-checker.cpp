class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> v(heights);
        sort(v.begin(), v.end());

        int result = 0;
        for (int i = 0; i < heights.size(); i++) {
            if (v[i] != heights[i]) {
                result++;
            }
        }

        return result;
    }
};