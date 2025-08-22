class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> result(num_people);
        int last_digit = 0;
        int total = 0;
        int i = 0;
        
        while (total < candies) {
            result[i] += ++last_digit;
            total += last_digit;

            if (total > candies) {
                result[i] += candies - total;
            }

            i = ++i % num_people; // Keep i under num_people and more than 0
        }

        return result;
    }
};