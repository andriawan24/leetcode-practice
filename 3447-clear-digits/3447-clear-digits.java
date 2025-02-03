class Solution {
    public String clearDigits(String s) {
        // Easy way
        StringBuilder build = new StringBuilder();

        for (int i = 0; i < s.length(); i++) {
            if (Character.isDigit(s.charAt(i))) {
                build.deleteCharAt(build.length() - 1);
            } else {
                build.append(s.charAt(i));
            }
        }

        return build.toString();
    }
}