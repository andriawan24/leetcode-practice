class Solution {
public:
    bool isHappy(int n) {
        if (n == 1 || n == 7) return true;
        if (n < 10) return false;
        
        int slow = n;
        int fast = n;

        while (n >= 10) {
            slow = calculate(slow);
            fast = calculate(calculate(fast));
            if (fast == 1) return true;
            if (slow == fast) break;
        }

        return false;
    }

    int calculate(int n) {
        int result = 0;

        while (n > 0) {
            int digit = n % 10;
            result += digit * digit;
            n /= 10;
        }

        return result;
    }
};