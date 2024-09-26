class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> count;
        stringstream ss(s1 + ' ' + s2);
        string temp;

        while (ss >> temp) {
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