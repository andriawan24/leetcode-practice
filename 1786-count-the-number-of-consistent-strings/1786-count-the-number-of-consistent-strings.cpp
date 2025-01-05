class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        unordered_map<char, int> mp;

        for (char allow: allowed) {
            mp[allow] = 1;
        }

        for (int i = 0; i < words.size(); i++) {
            bool isConsistent = true;
            for (char word: words[i]) {
                if (mp[word] == 0) {
                    isConsistent = false;
                    break;
                }
            }
            if (isConsistent) count++;
        }

        return count;
    }
};