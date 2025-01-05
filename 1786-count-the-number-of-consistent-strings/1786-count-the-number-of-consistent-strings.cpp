class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        ios::sync_with_stdio(0);
        cin.tie(0);

        int count = 0;
        bitset<26> validated;

        for (auto letter : allowed) 
            validated[letter - 'a'] = 1;

        for (auto word: words) {
            bool isConsistent = true;
            for (auto x: word) {
                if (!validated[x - 'a']) {
                    isConsistent = false;
                    break;
                }
            }
            if (isConsistent) count++;
        }

        return count;
    }
};