class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        vector<vector<int>> result;

        int minimumAbs = INT_MAX;
        for (int i = 1; i <= n - 1; i++) {
            minimumAbs = min(minimumAbs, arr[i] - arr[i - 1]);
        }

        for (int i = 1; i <= n - 1; i++) {
            if (arr[i] - arr[i - 1] == minimumAbs) {
                result.push_back({arr[i - 1], arr[i]});
            }
        }

        return result;
    }
};