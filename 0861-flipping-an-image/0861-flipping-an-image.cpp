class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (vector<int>& images: image) {
            int start = 0, end = images.size()-1;
            while (start < end) {
                swap(images[start], images[end]);
                start++;
                end--;
            }
        }

        for (vector<int>& images: image) {
            for (int& i: images) {
                i = i == 0 ? 1 : 0;
            }
        }

        return image;
    }
};