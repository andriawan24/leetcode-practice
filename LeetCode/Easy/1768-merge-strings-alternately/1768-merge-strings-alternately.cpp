class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size() + word2.size();
        string result = "";

        for (int i = 0; i < n; i++) {
            if (i < word1.size()) {
                result += word1[i];
            }

            if (i < word2.size()) {
                result += word2[i];
            }
        }

        return result;
    }
};