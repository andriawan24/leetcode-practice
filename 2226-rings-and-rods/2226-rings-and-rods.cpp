class Solution {
public:
    int countPoints(string rings) {
        map<int, vector<bool>> rods;

        for (int i = 0; i < 10; i++) {
            rods[i] = {false, false, false};
        }

        for (int i = 0; i < rings.size(); i+=2) {
            int rgb = 0;

            switch (rings[i]) {
                case 'R':
                    rgb = 0;
                    break;
                case 'G':
                    rgb = 1;
                    break;
                case 'B':
                    rgb = 2;
                    break;
            }

            rods[rings[i + 1] - '0'][rgb] = true;
        }

        int count = 0;
        for (const auto& [key, values]: rods) {
            bool isValid = true;
            
            for (const auto& value: values) {
                if (!value) {
                    isValid = false;
                    break;
                }
            }

            if (isValid) {
                count++;
            }
        }

        return count;
    }
};