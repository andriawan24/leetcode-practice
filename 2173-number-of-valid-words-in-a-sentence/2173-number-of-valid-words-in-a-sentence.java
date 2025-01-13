class Solution {
    public int countValidWords(String sentence) {
        int valid = 0;
        String[] words = sentence.split(" ");

        outer: 
        for (String word: words) {
            char[] c = word.toCharArray();
            int countHypen = 0;
            boolean isValid = false;
            for (int i = 0; i < c.length; i++) {
                if (Character.isLetter(c[i])) isValid = true;
                if (Character.isDigit(c[i])) continue outer;
                if (c[i] == '.' || c[i] == ',' || c[i] == '!') {
                    if (i != c.length-1) {
                        continue outer;
                    } else if (c.length > 2 && c[i - 1] == '-') {
                        continue outer;
                    } else {
                        isValid = true;
                    }
                }
                if (c[i] == '-') {
                    countHypen++;
                    if (i == 0 || i == c.length-1) continue outer;
                    if (countHypen == 2) continue outer;
                }
            }
            if (isValid) {
                System.out.println(word);
                valid++;
            }
        }

        return valid;
    }
}