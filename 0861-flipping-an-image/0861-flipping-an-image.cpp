class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (vector<int>& images: image) {
            std::ranges::reverse(images);
            for (int& i: images) {
                if (i == 0) {
                    i = 1;
                } else {
                    i = 0;
                }
            }
        }

        return image;
    }
};