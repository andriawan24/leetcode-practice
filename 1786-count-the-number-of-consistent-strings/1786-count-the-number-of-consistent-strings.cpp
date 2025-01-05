class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        ios::sync_with_stdio(0);
        cin.tie(0);

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