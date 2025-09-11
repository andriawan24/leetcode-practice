class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;

        for (const auto title: columnTitle) {
            int num = title - 'A' + 1;
            result = result * 26 + num;
        }
        
        return result;
    }
};