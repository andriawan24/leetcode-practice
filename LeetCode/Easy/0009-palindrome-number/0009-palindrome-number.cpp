class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int temp = x;
        long res = 0;

        while (temp > 0) {
            int lastDigit = temp % 10;
            res = (res * 10) + lastDigit;
            temp = temp / 10;
        }

        return (long) x == res;
    }
};