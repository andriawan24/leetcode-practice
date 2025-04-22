class Solution {
public:
    string defangIPaddr(string address) {
        string res;

        for (const auto &u: address) {
            if (u == '.') {
                res += "[.]";
            } else {
                res += u;
            }
        }

        return res;
    }
};