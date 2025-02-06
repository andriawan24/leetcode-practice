class Solution {
public:
    char repeatedCharacter(string s) {
        map<char, int> table;

        for (auto ch: s) {
            table[ch]++;
            if (table[ch] == 2) {
                return ch;
            }
        }

        return 's';
    }
};