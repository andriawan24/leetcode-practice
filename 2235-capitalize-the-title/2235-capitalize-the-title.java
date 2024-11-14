class Solution {
    public String capitalizeTitle(String title) {
        String[] titles = title.toLowerCase().split(" ");
        String result = "";

        for (String word: titles) {
            if (word.length() <= 2) {
                result += word;
                if (word != titles[titles.length-1]) {
                    result += " ";
                }
                continue;
            }

            result += word.substring(0, 1).toUpperCase() + word.substring(1, word.length());
            if (word != titles[titles.length-1]) {
                result += " ";
            }
        }

        return result;
    }
}