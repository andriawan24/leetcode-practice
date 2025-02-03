class Solution {
    public String clearDigits(String s) {
        int i = 0;
        while (s.matches(".*\\d.*")) {
            if (Character.isDigit(s.charAt(i))) {
                s = s.substring(0, i - 1) + s.substring(i + 1);
                i = 0;
            } else {
                i++;
            }
        }

        return s;
    }
}