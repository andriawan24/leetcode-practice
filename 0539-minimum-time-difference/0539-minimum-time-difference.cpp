class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        // This is my second solution with help of ChatGPT to define how to think and apply the algorithm
        vector<bool> times(1440, false);

        for (string point: timePoints) {
            int hours = stoi(point.substr(0, 2));
            int minutes = stoi(point.substr(3, 2));
            int total = (hours * 60) + minutes;
            if (times[total]) return 0; // Check if the time is duplicated
            times[total] = true;
        }

        int first = -1, prev = -1, minimum = INT_MAX, last = -1;

        for (int i = 0; i < 1440; i++) {
            if (times[i]) {
                if (first == -1) {
                    first = i;
                } else {
                    minimum = min(minimum, i - prev);
                }

                prev = i;
                last = i;
            }
        }

        minimum = min(minimum, (1440 - last + first));

        return minimum;
    }
};