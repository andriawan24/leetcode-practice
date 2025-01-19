class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;

        for (auto& operation: operations) {
            if (operation[0] == '+' || operation[operation.size() - 1] == '+') {
                x++;
            }

            if (operation[0] == '-' || operation[operation.size() - 1] == '-') {
                x--;
            }
        }

        return x;
    }
};