class Solution {
public:
    string clearDigits(const string& s) {
        auto result = ""s;
        
        for (auto c : s) {
            if (isdigit(c)) result.pop_back();
            else result.push_back(c);
        }

        return result;
    }
};