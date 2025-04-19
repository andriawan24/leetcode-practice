class Solution {
public:
    string reverseWords(string s) {
        int i = 0, n = s.size();

        while (i < n) {
            int j = i;
            while (j < n && s[j] != ' ') j++;

            int p = i, q = j - 1;
            while (p <= q) {
                swap(s[p++], s[q--]);
            }

            i = j + 1;
        }

        return s;
    }
};