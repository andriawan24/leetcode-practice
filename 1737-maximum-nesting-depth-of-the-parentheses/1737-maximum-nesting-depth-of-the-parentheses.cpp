class Solution {
public:
    int maxDepth(string s) {
        int maxDepth = 0;
        int count = 0;

        for (const char &c: s) {
            if (c == '(') {
                count++;
                maxDepth = max(maxDepth, count);
            } else if (c == ')') {
                count--;
            }
        }

        return maxDepth;
    }
};