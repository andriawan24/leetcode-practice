class Solution {
public:
    string makeFancyString(string s) {
        int writePos = 0;
        int count = 1;

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[writePos]) {
                count++;
            } else {
                count = 1;
            }

            if (count <= 2) {
                s[++writePos] = s[i];
            }
        }
        s.resize(writePos + 1);
        return s;
    }
};