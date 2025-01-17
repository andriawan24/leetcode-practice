class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxArea = 0;
        double maxDiagonal = 0;

        for (auto& dimension: dimensions) {
            double diagonal = sqrt(pow(dimension[0], 2) + pow(dimension[1], 2));
            int area = dimension[0] * dimension[1];
            if (diagonal >= maxDiagonal) {
                if (diagonal == maxDiagonal) {
                    maxArea = max(maxArea, area);
                } else {
                    maxArea = area;
                }
                maxDiagonal = diagonal;
            }
        }

        return maxArea;
    }
};