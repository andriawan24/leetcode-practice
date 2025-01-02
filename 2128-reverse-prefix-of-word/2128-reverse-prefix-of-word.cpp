class Solution {
    void reverse(string &a, int r) {
        int l = 0;
        while (l < r) {
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }
public:
    string reversePrefix(string word, char ch) {
        int idx = 0;
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == ch) {
                idx = i;
                break;
            }
        }
        reverse(word, idx);
        return word;
    }
};