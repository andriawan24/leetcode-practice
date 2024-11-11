class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string firstLine = "qwertyuiop";
        string secondLine = "asdfghjkl";
        string thirdLine = "zxcvbnm";

        vector<string> result;

        for (string word: words) {
            bool isFirst = false, isSecond = false, isThird = false;
            for (char letter: word) {
                char lowerLetter = tolower(letter);
                if (firstLine.contains(lowerLetter)) {
                    isFirst = true;
                } else if (secondLine.contains(lowerLetter)) {
                    isSecond = true;
                } else if (thirdLine.contains(lowerLetter)) {
                    isThird = true;
                }
            }
            if (isFirst + isSecond + isThird == 1) {
                result.push_back(word);
            }
        }

        return result;
    }
};