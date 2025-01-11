class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int big = *max_element(candies.begin(), candies.end());

        for (int candy: candies) {
            result.push_back(candy + extraCandies >= big);
        }

        return result;
    }
};