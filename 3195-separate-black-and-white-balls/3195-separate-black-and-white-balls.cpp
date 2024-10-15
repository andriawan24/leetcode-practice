class Solution {
public:
    long long minimumSteps(string s) {
        if (s.size() == 1) return 0;
        long long moves = 0;
        int left = 0;
        int right = 1;
        int n = s.size();
        while (right < n) {
            if (s[left] == '1' && s[right] == '0') {
                swap(s[left], s[right]);
                left++;
                right++;
                moves += right - left;
            } else if (s[left] == '0' && s[right] == '0') {
                left++;
                right++;
            } else if (s[left] == '0') {
                left++;
            } else if (s[right] == '1') {
                right++;
            }
        }
        return moves;
    }
};