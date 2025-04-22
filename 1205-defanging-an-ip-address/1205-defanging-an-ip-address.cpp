class Solution {
public:
    string defangIPaddr(string address) {
        string res;

        for (auto u: address) {
            if (u == '.') {
                res += "[.]";
            } else {
                res += u;
            }
        }

        return res;
    }
};