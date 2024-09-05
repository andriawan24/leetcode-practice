class Solution {
public:
    int minimumMoves(string s) {
        int moves = 0, l = 0;

        while (l < s.size()) {
            if (s[l] == 'X') {
                moves++;
                l += 2;
            }
            l++;
        }

        return moves;
    }
};