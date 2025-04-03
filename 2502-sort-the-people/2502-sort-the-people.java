class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
        HashMap<Integer, String> table = new HashMap<>();
        for (int i = 0; i < heights.length; i++) {
            table.put(heights[i], names[i]);
        }
        Arrays.sort(heights);

        int index = 0;
        for (int i = heights.length - 1; i >= 0; i--) {
            names[index] = table.get(heights[i]);
            index++;
        }

        return names;
    }
}