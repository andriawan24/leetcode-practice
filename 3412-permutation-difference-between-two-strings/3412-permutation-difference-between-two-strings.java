class Solution {
    public int findPermutationDifference(String s, String t) {
        int result = 0;

        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; i < t.length(); j++) {
                if (s.charAt(i) == t.charAt(j)) {
                    result += Math.abs(i - j);
                    break;
                }
            }
        }

        return result;
    }
}