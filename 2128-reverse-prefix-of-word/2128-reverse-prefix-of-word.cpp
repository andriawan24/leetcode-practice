class Solution {
public:
    string reversePrefix(string word, char ch) {
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == ch) {
                int l = 0;
                int r = i;

                while (l < r) {
                    swap(word[l], word[r]);
                    l++;
                    r--;
                }

                break;
            }
        }

        return word;
    }
};