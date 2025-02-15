class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char, char> table;
        string decoded;

        for (auto& ch: key) {
            if (ch != ' ' && !table[ch]) {
                table[ch] = char('a' + table.size() - 1);
            }
        }

        for (auto& ch: message) {
            if (ch == ' ') {
                decoded += ch;
            } else {
                decoded += table[ch];
            }
        }

        return decoded;
    }
};