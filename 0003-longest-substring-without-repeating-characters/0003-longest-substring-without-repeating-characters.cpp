class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0, left = 0;
        char start = ' ';
        unordered_set<char> elems;

        for (int right = 0; right < s.length(); right++) {
            if (elems.find(s[right]) == elems.end()) {
                elems.insert(s[right]);
                result = max(result, right - left + 1);
            } else {
                while (elems.count(s[right])) {
                    elems.erase(s[left]);
                    left++;
                }
                elems.insert(s[right]);
            }
        }

        return result;
    }
};