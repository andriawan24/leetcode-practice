class Solution {
public:
    int maxDepth(string s) {
        int maxDepth = 0;
        stack<char> p;

        for (const char &c: s) {
            if (c == '(') {
                p.push(c);
                int depth = p.size();
                maxDepth = max(maxDepth, depth);
            } else if (c == ')') {
                p.pop();
            }
        }

        return maxDepth;
    }
};