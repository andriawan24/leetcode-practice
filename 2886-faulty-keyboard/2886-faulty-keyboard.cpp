class Solution {
public:
    string finalString(string s) {
        string result = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'i') {
                int left = 0, right = result.size() - 1;
                while (left <= right) {
                    char temp = result[left];
                    result[left] = result[right];
                    result[right] = temp;
                    left++;
                    right--;
                }
            } else {
                result += s[i];
            }
        }

        return result;
    }
};