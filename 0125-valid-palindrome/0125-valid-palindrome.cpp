class Solution {
public:
    bool isPalindrome(string s) {
        string chars;

        for (auto i: s) {
            if (isalnum(i)) {
                chars += tolower(i);
            }
        }

        int left = 0, right = chars.size() - 1;
        while (left <= right) {
            if (chars[left] != chars[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};