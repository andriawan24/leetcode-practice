class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> result;
        map<int, int> table;

        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());
        set<int> s3(nums3.begin(), nums3.end());
        
        for (int num: s1) {
            table[num]++;
        }

        for (int num: s2) {
            table[num]++;
            if (table[num] > 1 && find(result.begin(), result.end(), num) == result.end()) {
                result.push_back(num);
            }
        }

        for (int num: s3) {
            table[num]++;
            if (table[num] > 1 && find(result.begin(), result.end(), num) == result.end()) {
                result.push_back(num);
            }
        }

        return result;
    }
};