class Solution {
    public int firstUniqChar(String s) {
        int uniqueIndex = -1;
        HashMap<Character, Integer> table = new HashMap<Character, Integer>();

        for (int i = 0; i < s.length(); i++) {
            if (table.get(s.charAt(i)) == null) {
                table.put(s.charAt(i), 1);
            } else {
                table.put(s.charAt(i), 2);
            }
        }

        for (int i = 0; i < s.length(); i++) {
            if (table.get(s.charAt(i)) == 1) {
                return i;
            }
        }

        return uniqueIndex;
    }
}