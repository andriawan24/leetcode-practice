class Solution {
public:
    bool isValid(string word) {
        if (word.length() < 3) return false;

        bool isVowel = false;
        bool isConsonant = false;

        for (auto letter : word) {
            if (isdigit(letter)) {
                continue;
            } 
            
            if (isalpha(letter)) {
                char lower = tolower(letter);
                if (lower == 'a' || lower == 'i' || lower == 'u' || lower == 'e' || lower == 'o') {
                    isVowel = true;
                } else {
                    isConsonant = true;
                }
            } else {
                return false;
            }
        }

        return isVowel && isConsonant;
    }
};