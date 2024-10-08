class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] + 1 < 10) {
                digits[i] += 1;
                return digits;
            }
            digits[i] = 0;
        }
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};