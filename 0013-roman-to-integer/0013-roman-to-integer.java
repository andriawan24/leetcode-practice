class Solution {
    public int romanToInt(String s) {
        int sum = 0;
        char prevChar = ' ';

        for (int i = 0; i < s.length(); i++) {
            switch (s.charAt(i)) {
                case 'I':
                    sum += 1;
                    break;
                case 'V':
                    if (prevChar == 'I') sum -= 2;
                    sum += 5;
                    break;
                case 'X':
                    if (prevChar == 'I') sum -= 2;
                    sum += 10;
                    break;
                case 'L':
                    if (prevChar == 'X') sum -= 20;
                    sum += 50;
                    break;
                case 'C':
                    if (prevChar == 'X') sum -= 20;
                    sum += 100;
                    break;
                case 'D':
                    if (prevChar == 'C') sum -= 200;
                    sum += 500;
                    break;
                case 'M':
                    if (prevChar == 'C') sum -= 200;
                    sum += 1000;
                    break;
            }
            prevChar = s.charAt(i);
        }

        return sum;
    }
}