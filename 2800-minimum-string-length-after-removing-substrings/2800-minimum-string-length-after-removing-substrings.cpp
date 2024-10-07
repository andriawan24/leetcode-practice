class Solution {
public:
    int minLength(string s) {
        stack<char> chars;
        for (char c: s) {
            if (!chars.empty() && (c == 'B' && chars.top() == 'A' || c == 'D' && chars.top() == 'C')) {
                chars.pop();
            } else {
                chars.push(c);
            }
        }
        return chars.size();
    }
};