class Solution {
public:
    string reverseVowels(string s) {
        int start = 0;
        int end = s.size() - 1;

        while (start < end) {
            bool isstartvowel = isvowel(s[start]);
            bool isendvowel = isvowel(s[end]);

            if (isstartvowel && isendvowel) {
                swap(s[start], s[end]);
                start++;
                end--;
            } else if (isstartvowel) {
                end--;
            } else if (isendvowel) {
                start++;
            } else {
                start++;
                end--;
            }
        }

        return s;
    }

    bool isvowel(char ch) {
        string lowervowels = "aiueo";
        string uppervowels = "AIUEO";
        return lowervowels.find(ch) != std::string::npos || uppervowels.find(ch) != std::string::npos;
    }
};