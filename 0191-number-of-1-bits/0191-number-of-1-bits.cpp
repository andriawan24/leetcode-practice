class Solution {
public:
    int hammingWeight(int n) {
        int counter = 0;
        while (n > 0) {
            if (n & 1) {
                counter++;
            }
            n >>= 1;
        }
        return counter;
    }
};