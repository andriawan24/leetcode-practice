class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 1) return true;

        long i = 3;
        while (i <= n) {
            if (i == n) return true;
            i *= 3;
        }

        return false;
    }
};