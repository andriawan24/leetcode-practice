class Solution {
public:
    int getLucky(string s, int k) {
        string transform = "";
        for (int i = 0; i < s.size(); i++) {
            transform += to_string(int(s[i]) - 96);
        }

        string temp_transform = transform;
        int result = 0;
        for (int i = 0; i < k; i++) {
            int temp_result = 0;
            for (char num_char: temp_transform) {
                int num = num_char - '0';
                temp_result += num;
            }
            temp_transform = to_string(temp_result);
            result = temp_result;
        }

        return result;
    }
};