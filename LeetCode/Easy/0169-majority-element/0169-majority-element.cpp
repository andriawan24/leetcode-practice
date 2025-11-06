class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int coun = 0, el = 0;

        for (const auto &num: nums) {
            if (coun == 0) {
                el = num;
                coun = 1;
            } else if (el == num) {
                coun++;
            } else {
                coun--;
            }
        }

        if (coun > 0) {
            return el;
        }
        
        return 0;
    }
};