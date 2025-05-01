class Solution {
public:
    bool isPalindrome(string s) {
        auto left = s.begin(), right = s.end() - 1;

        while (left < right) {
            while (left < right && !isalnum(*left)) left++;
            while (left < right && !isalnum(*right)) right--;
            if (tolower(*left) != tolower(*right)) return false;
            left++;
            right--;
        }

        return true;
    }
};