class Solution {
public:
    string clearDigits(string s) {
        string result = "";

        for (int i = 0; i < s.length(); i++) {
            if (isdigit(s[i])) {
                result.erase(result.length() - 1);
            } else {
                result += s[i];
            }
        }

        return result;
    }
};