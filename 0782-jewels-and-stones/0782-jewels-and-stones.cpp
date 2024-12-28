class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int result = 0;
        for (char stone: stones) {
            for (char jewel: jewels) {
                if (stone == jewel) result++;
            }
        }
        return result;
    }
};