class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;

        for (int i = 0; i < words.size(); i++) {
            bool isConsistent = true;
            for (char word: words[i]) {
                if (allowed.find(word) == string::npos) {
                    isConsistent = false;
                    break;
                }
            }
            if (isConsistent) count++;
        }

        return count;
    }
};