class Solution {
    public String replaceDigits(String s) {
        StringBuilder result = new StringBuilder(s);

        for (int i = 0; i < s.length(); i++) {
            if (i % 2 != 0) {
                result.setCharAt(i, (char) (((int) s.charAt(i-1)) + (s.charAt(i) - '0')));
            } else {
                result.setCharAt(i, s.charAt(i));
            }
        }

        return result.toString();
    }
}