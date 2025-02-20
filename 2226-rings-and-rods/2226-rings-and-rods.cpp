class Solution {
public:
    int countPoints(string rings) {
        map<int, vector<bool>> rods;

        for (int i = 0; i < 10; i++) {
            rods[i] = {false, false, false};
        }

        for (int i = 0; i < rings.size(); i+=2) {
            if (rings[i] == 'R') {
                rods[rings[i + 1] - '0'][0] = true;
            } else if (rings[i] == 'G') {
                rods[rings[i + 1] - '0'][1] = true;
            } else if (rings[i] == 'B') {
                rods[rings[i + 1] - '0'][2] = true;
            }
        }

        int count = 0;
        for (const auto& [key, values]: rods) {
            bool isValid = true;
            for (auto value: values) {
                if (!value) isValid = false;
            }
            if (isValid) count++;
        }

        return count;
    }
};