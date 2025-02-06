class Solution {
    public char repeatedCharacter(String s) {
        int[] chars = new int[26];

        for (char ch: s.toCharArray()) {
            chars[ch - 'a']++;
            if (chars[ch - 'a'] == 2) {
                return ch;
            }
        }

        return '0';
    }
}