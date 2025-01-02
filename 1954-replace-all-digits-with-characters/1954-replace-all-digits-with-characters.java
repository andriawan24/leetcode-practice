class Solution {
    public String replaceDigits(String s) {
        char[] words = s.toCharArray();

        for (int i = 1; i < s.length(); i += 2) {
            words[i] = (char) ((int) words[i - 1] + words[i] - '0');
        }

        return new String(words);
    }
}