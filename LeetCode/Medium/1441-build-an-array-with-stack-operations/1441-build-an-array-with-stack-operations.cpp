class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> result;
        int currentTarget = 1;

        for (int i = 0; i < target.size(); i++) {
            result.push_back("Push");
            if (target[i] != currentTarget) {
                result.push_back("Pop");
                i -= 1;
            }
            currentTarget++;
        }

        return result;
    }
};