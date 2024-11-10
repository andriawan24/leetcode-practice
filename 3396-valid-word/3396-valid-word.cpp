class Solution {
public:
    bool isValid(string word) {
        if (word.size() < 3) return false;

        vector<char> vowels{'a', 'i', 'u', 'e', 'o', 'A', 'I', 'U', 'E', 'O'};

        bool isContainsNonCharacter = false;
        int vowelCount = 0;
        int consonantCount = 0;

        for (auto letter : word) {
            int letterIdx = (int) letter;
            if (letterIdx >= 48 && letterIdx <= 57) {
                // Do nothing
            } else if (find(begin(vowels), end(vowels), letter) != end(vowels)) {
                vowelCount++;
            } else if (letterIdx >= 65 && letterIdx <= 90) {
                consonantCount++;
            } else if (letterIdx >= 97 && letterIdx <= 122) {
                consonantCount++;
            } else {
                isContainsNonCharacter = true;
            }
        }

        return consonantCount >= 1 && vowelCount >= 1 && !isContainsNonCharacter;
    }
};