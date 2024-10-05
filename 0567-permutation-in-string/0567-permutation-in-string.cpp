class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        vector<int> count_s1(26, 0);
        vector<int> count_window(26, 0);

        for (auto c : s1) {
            count_s1[c - 'a']++;
        }

        for (int i = 0; i < s1.size(); i++) {
            count_window[s2[i] - 'a']++;
        }

        for (int i = s1.size(); i < s2.size(); i++) {
            if (count_s1 == count_window) return true;
            count_window[s2[i] - 'a']++;
            count_window[s2[i - s1.size()] - 'a']--;
        }

        return count_s1 == count_window;
    }
};