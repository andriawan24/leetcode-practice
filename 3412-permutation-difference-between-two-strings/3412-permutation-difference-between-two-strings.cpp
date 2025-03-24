class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char, int> table;
        int result = 0;

        for (int i = 0; i < s.size(); i++) {
            table[s[i]] = i;
        }

        for (int i = 0; i < t.size(); i++) {
            if (table.count(t[i])) {
                result += abs(table[t[i]] - i);
            }
        }

        return result;
    }
};