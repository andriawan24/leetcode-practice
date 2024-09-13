class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> result;

        // Precompute XOR
        for (int i = 1; i < arr.size(); i++) {
            arr[i] ^= arr[i - 1];
        }

        for (auto& query: queries) {
            if (query[0] > 0) {
                result.push_back(arr[query[0] - 1] ^ arr[query[1]]);
            } else {
                result.push_back(arr[query[1]]);
            }
        }

        return result;
    }
};

static const int KDS = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();