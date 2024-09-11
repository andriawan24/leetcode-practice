class Solution {
public:
    bool isValid(string s) {
        stack<char> chars;
        for (char i: s) {
            if (i == ')') {
                if (chars.size() > 0 && chars.top() == '(') {
                    chars.pop();
                } else return false;
            } else if (i == ']') {
                if (chars.size() > 0 && chars.top() == '[') {
                    chars.pop();
                } else return false;
            } else if (i == '}') {
                if (chars.size() > 0 && chars.top() == '{') {
                    chars.pop();
                } else return false;
            } else {
                if (i == '[' || i == '(' || i == '{') {
                    chars.push(i);
                } else return false;
            }
        }

        return chars.size() == 0;
    }
};