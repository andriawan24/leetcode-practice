class Solution {
    public int minLength(String s) {
        Stack<Character> chars = new Stack<>();
        for (Character c: s.toCharArray()) {
            if (chars.isEmpty()) {
                chars.push(c);
                continue;
            }

            boolean isAb = c == 'B' && chars.peek() == 'A';
            boolean isCd = c == 'D' && chars.peek() == 'C';
            if (isAb || isCd) {
                chars.pop();
            } else {
                chars.push(c);
            }
        }

        return chars.size();
    }
}