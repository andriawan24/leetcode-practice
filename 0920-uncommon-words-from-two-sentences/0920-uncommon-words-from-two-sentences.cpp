class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> freqs;
        vector<string> res;
        stringstream ss1(s1);
        stringstream ss2(s2);
        string temp;
        while (ss1 >> temp) {
            freqs[temp]++;
        }

        while (ss2 >> temp) {
            freqs[temp]++;
        }

        for (auto words: freqs) {
            if (words.second == 1) {
                res.push_back(words.first);
            }
        }

        return res;
    }
};