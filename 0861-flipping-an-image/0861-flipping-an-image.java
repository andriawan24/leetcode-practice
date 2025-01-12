class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
        for (int[] images: image) {
            int start = 0, end = images.length-1;
            while (start < end) {
                images[start] = (images[start] + images[end]) - (images[end] = images[start]);
                start++;
                end--;
            }

            for (int i = 0; i < images.length; i++) {
                images[i] = images[i] == 0 ? 1 : 0;
            }
        }

        return image;
    }
}