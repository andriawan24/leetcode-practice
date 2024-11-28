class Solution {
public:
    string makeFancyString(string s) {
        string result;
        int lastCharCount = 0;
        char lastChar = ' ';

        for (int i = 0; i < s.size(); i++) {
            if (lastChar != s[i]) {
                lastChar = s[i];
                lastCharCount = 1;
                result += lastChar;
            } else {
                lastCharCount++;
                if (lastCharCount < 3) {
                    result += lastChar;
                }
            }
        }

        return result;
    }
};