class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
        for (int i = 0; i < heights.length; i++) {
            int biggest = heights[i];
            for (int j = i + 1; j < heights.length; j++) {
                if (heights[j] > biggest) {
                    biggest = heights[j];
                    String temp = names[i];
                    names[i] = names[j];
                    names[j] = temp;

                    int tempHeight = heights[i];
                    heights[i] = heights[j];
                    heights[j] = tempHeight;
                }
            }
        }

        return names;
    }
}