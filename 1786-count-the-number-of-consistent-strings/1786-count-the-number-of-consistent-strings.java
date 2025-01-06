class Solution {
    public int countConsistentStrings(String allowed, String[] words) {
        int count = 0;
        int[] allows = new int[26];

        for (char allow: allowed.toCharArray()) {
            allows[allow - 'a'] = 1;
        }

        for (String word: words) {
            boolean consistent = true;
            for (char c: word.toCharArray()) {
                if (allows[c - 'a'] != 1) {
                    consistent = false;
                    break;
                }
            }
            if (consistent) count++;
        }

        return count;
    }
}