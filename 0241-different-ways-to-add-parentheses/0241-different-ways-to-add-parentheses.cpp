class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        vector<int> res;
        for (size_t i = 0; i < expression.length(); ++i) {
            char operand = expression[i];
            if (operand == '+' || operand == '-' || operand == '*') {
                vector<int> leftRes = diffWaysToCompute(expression.substr(0, i));
                vector<int> rightRes = diffWaysToCompute(expression.substr(i + 1));

                for (int left: leftRes) {
                    for (int right: rightRes) {
                        if (operand == '+') res.push_back(left + right);
                        else if (operand == '-') res.push_back(left - right);
                        else if (operand == '*') res.push_back(left * right);
                    }
                }
            }
        } 
        if (res.empty()) res.push_back(stoi(expression));
        return res;
    }
};