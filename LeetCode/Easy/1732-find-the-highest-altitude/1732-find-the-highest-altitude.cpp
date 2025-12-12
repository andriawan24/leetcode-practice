class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res = 0;
        int current = 0;

        for (const auto &alt: gain) {
            current += alt;
            res = max(res, current);
        }

        return res;
    }
};