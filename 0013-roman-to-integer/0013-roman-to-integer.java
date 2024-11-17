class Solution {
    public int romanToInt(String s) {
        int sum = getNumber(s.charAt(0), ' ');

        for (int i = 1; i < s.length(); i++) {
            sum += getNumber(s.charAt(i), s.charAt(i-1));
        }

        return sum;
    }

    public int getNumber(char roman, char prev) {
        int sum = 0;
        switch (roman) {
            case 'I':
                sum += 1;
                break;
            case 'V':
                if (prev == 'I') sum -= 2;
                sum += 5;
                break;
            case 'X':
                if (prev == 'I') sum -= 2;
                sum += 10;
                break;
            case 'L':
                if (prev == 'X') sum -= 20;
                sum += 50;
                break;
            case 'C':
                if (prev == 'X') sum -= 20;
                sum += 100;
                break;
            case 'D':
                if (prev == 'C') sum -= 200;
                sum += 500;
                break;
            case 'M':
                if (prev == 'C') sum -= 200;
                sum += 1000;
                break;
        }
        return sum;
    }
}