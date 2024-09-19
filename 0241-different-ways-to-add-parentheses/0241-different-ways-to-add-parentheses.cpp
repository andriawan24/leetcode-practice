class Solution {
public:
    unordered_map<string, vector<int>> memo;

    vector<int> diffWaysToCompute(string expression) {
        if (memo.find(expression) != memo.end()) {
            return memo[expression];
        }

        vector<int> res;

        for (size_t i = 0; i < expression.size(); ++i) {
            char c = expression[i];
            if (c == '+' || c == '-' || c == '*') {
                vector<int> leftRes = diffWaysToCompute(expression.substr(0, i));
                vector<int> rightRes = diffWaysToCompute(expression.substr(i + 1));

                for (int left: leftRes) {
                    for (int right: rightRes) {
                        if (c == '+') res.push_back(left + right);
                        else if (c == '-') res.push_back(left - right);
                        else if (c == '*') res.push_back(left * right);
                    }
                }
            }
        } 
        if (res.empty()) res.push_back(stoi(expression));
        memo[expression] = res;
        return res;
    }
};