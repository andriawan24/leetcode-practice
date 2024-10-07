class Solution {
    public int minLength(String s) {
        char[] stacks = new char[s.length()+1];
        int last = -1;
        for (char c: s.toCharArray()) {
            if (last > -1 && (c == 'D' && stacks[last] == 'C' || c == 'B' && stacks[last] == 'A')) {
                last--;
            } else {
                last++;
                stacks[last] = c;
            }
        }
        return ++last;
    }
}