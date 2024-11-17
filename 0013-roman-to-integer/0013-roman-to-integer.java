class Solution {
    public int romanToInt(String s) {
        Map<Character, Integer> romans = new HashMap<Character, Integer>();
        romans.put('I', 1);
        romans.put('V', 5);
        romans.put('X', 10);
        romans.put('L', 50);
        romans.put('C', 100);
        romans.put('D', 500);
        romans.put('M', 1000);

        char lastChar = s.charAt(0);
        int result = romans.get(lastChar);

        for (int i = 1; i < s.length(); i++) {
            if (romans.get(s.charAt(i)) <= romans.get(lastChar)) {
                result += romans.get(s.charAt(i));
            } else {
                result += romans.get(s.charAt(i)) - (romans.get(lastChar) * 2);
            }
            lastChar = s.charAt(i);
        }

        return result;
    }
}