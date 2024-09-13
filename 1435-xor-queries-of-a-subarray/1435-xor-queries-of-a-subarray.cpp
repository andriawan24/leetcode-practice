class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> result;
        for (int i = 0; i < queries.size(); i++) {
            int temp = 0;
            for (int j = queries[i][0]; j <= queries[i][1]; j++) {
                temp ^= arr[j];
            }
            result.push_back(temp);
        }

        return result;
    }
};