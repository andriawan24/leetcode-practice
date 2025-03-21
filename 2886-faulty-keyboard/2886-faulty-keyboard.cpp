class Solution {
public:
    string finalString(string s) {
        string result = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'i') {
                reverse(result.begin(), result.end());
            } else {
                result += s[i];
            }
        }

        return result;
    }
};