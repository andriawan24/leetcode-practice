class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (vector<int>& images: image) {
            std::ranges::reverse(images);
            for (int& i: images) {
                i = i == 0 ? 1 : 0;
            }
        }

        return image;
    }
};