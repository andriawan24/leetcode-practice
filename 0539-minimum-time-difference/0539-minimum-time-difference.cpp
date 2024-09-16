class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        int minimum = INT_MAX;

        for (auto point: timePoints) {
            minutes.push_back(calculateMinutes(point));
        }

        sort(minutes.begin(), minutes.end());

        for (int i = 1; i < minutes.size(); i++) {
            int temp = minutes[i] - minutes[i - 1];
            minimum = min(minimum, temp);
        }

        int circular = (1440 - minutes.back() + minutes.front());
        minimum = min(minimum, circular);

        return minimum;
    }

    int calculateMinutes(string time) {
        int hours = stoi(time.substr(0, 2));
        int minutes = stoi(time.substr(3, 2));
        return (hours * 60) + minutes;
    }
};