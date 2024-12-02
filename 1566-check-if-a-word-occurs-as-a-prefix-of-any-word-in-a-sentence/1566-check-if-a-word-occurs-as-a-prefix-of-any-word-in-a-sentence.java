class Solution {
    public int isPrefixOfWord(String sentence, String searchWord) {
        String[] words = sentence.split(" ");

        for (int i = 0; i < words.length; i++) {
            if (words[i].length() >= searchWord.length()) {
                String compare = "";
                
                for (int j = 0; j < searchWord.length(); j++) {
                    compare += words[i].charAt(j);
                }

                if (compare.equals(searchWord)) {
                    return i + 1;
                }
            }
        }

        return -1;
    }
}