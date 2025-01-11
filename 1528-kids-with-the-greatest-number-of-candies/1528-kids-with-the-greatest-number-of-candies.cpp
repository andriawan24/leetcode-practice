class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int big = candies[0];

        for (int candy: candies) {
            big = max(big, candy);
        }

        for (int candy: candies) {
            result.push_back(candy + extraCandies >= big);
        }

        return result;
    }
};