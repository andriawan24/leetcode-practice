class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> count;

        for (auto c: t) {
            count[c]++;
        }

        for (auto c: s) {
            count[c]--;
            if (count[c] == 0) {
                count.erase(c);
            }
        }

        return count.begin()->first;
    }
};