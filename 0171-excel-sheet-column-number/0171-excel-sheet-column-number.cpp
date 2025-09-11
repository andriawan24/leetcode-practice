class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();
        int total = 0;

        for (int i = n - 1; i >= 0; i--) {
            int alphanum = (columnTitle[i] - 'A') + 1;
            total += alphanum * pow(26, n - i - 1);
        }

        return total;
    }
};