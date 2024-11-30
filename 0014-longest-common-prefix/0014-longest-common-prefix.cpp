class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";

        string base = strs[0];
        for (int i = 0; i < base.size(); i++) {
            for (int j = 1; j < strs.size(); j++) {
                if (i == strs[j].size() || strs[j][i] != base[i]) {
                    base.resize(i);
                    return base;
                }
            }
        }
        
        return base;
    }
};