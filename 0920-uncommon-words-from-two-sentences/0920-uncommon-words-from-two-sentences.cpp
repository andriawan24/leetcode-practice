class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> count;
        stringstream ss1(s1), ss2(s2);
        string temp;

        while (ss1 >> temp) {
            count[temp]++;
        }

        while (ss2 >> temp) {
            count[temp]++;
        }

        vector<string> result;
        for (auto words: count) {
            if (words.second == 1) {
                result.push_back(words.first);
            }
        }

        return result;
    }
};