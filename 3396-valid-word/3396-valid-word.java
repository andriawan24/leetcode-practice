import java.util.*;

class Solution {
    public boolean isValid(String word) {
        if (word.length() < 3) return false;

        boolean isVowel = false;
        boolean isConsonant = false;

        for (char letter: word.toCharArray()) {
            if (Character.isDigit(letter)) continue;
            if (Character.isLetter(letter)) {
                char lower = Character.toLowerCase(letter);
                if ("aiueo".indexOf(lower) != -1) {
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
}