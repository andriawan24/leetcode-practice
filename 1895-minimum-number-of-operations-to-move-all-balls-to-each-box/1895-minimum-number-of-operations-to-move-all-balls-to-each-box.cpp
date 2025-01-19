class Solution {
public:
    vector<int> minOperations(string boxes) {
        // Optimized solution from the solutions tab
        vector<int> res;

        int n = boxes.length();
        vector<int> distances(n, 0);

        int prefCount = 0, prefSum = 0;

        for (int i = 0; i < n; i++) {
            distances[i] = prefCount * i - prefSum;
            if (boxes[i] == '1') {
                prefCount++;
                prefSum += i;
            }
        }

        int suffCount = 0, suffSum = 0;

        for (int i = n - 1; i >= 0; i--) {
            distances[i] += suffSum - suffCount * i;
            if (boxes[i] == '1') {
                suffCount++;
                suffSum += i;
            }
        }

        for (int dist: distances) {
            res.push_back(dist);
        }

        return res;
    }
};