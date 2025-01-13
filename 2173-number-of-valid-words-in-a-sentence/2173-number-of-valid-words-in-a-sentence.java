class Solution {
    public int countValidWords(String sentence) {
        int ans = 0;
        String[] words = sentence.trim().split("\\s+");

        for (String word: words) {
            if (isValid(word)) {
                ans++;
            }
        }

        return ans;
    }

    private boolean isValid(String word) {
        int n = word.length();
        boolean hasPunc = false;
        boolean hasHypen = false;

        for (int i = 0; i < n; i++) {
            char c = word.charAt(i);

            if (Character.isDigit(c)) return false;

            if (c == '-') {
                if (hasHypen || i == 0 || i == n - 1) {
                    return false;
                }

                if (!Character.isLetter(word.charAt(i-1)) || 
                    !Character.isLetter(word.charAt(i+1))) {
                    return false;
                }
                hasHypen = true;
            } else if (c == '!' || c == '.' || c == ',') {
                if (hasPunc || i != n - 1) {
                    return false;
                }
                hasPunc = true;
            } else if (!Character.isLetter(c)) {
                return false;
            }
        }

        return true;
    }
}