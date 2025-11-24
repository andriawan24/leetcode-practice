class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0) return true;
        if (flowerbed.size() == 1) {
            return flowerbed[0] == 0;
        }

        int availPlots = 0;

        for (int i = 0; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 0) {
                // START
                if (i == 0) {
                    if (flowerbed[i + 1] == 0) {
                        availPlots++;
                        flowerbed[i] = 1;
                    }
                    continue;
                }

                // END
                if (i == flowerbed.size() - 1) {
                    if (flowerbed[i - 1] == 0) {
                        availPlots++;
                        flowerbed[i] = 1;
                    }
                    continue;
                }

                // MIDDLE
                if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
                    availPlots++;
                    flowerbed[i] = 1;
                    continue;
                }
            }
        }

        return availPlots >= n;
    }
};