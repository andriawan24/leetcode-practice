class Solution {
public:
    int lengthOfLastWord(string s) {
        int _length = 0;
        bool isZero = false;

        for (int i = 0; i < s.size(); i++) {
            if (isspace(s[i])) {
                isZero = true;
                continue;
            } else {
                if (isZero) {
                    _length = 1;
                } else {
                    _length++;
                }
                isZero = false;
            }
        }

        return _length;
    }
};