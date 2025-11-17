class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) {
            return "";
        }
        
        string result = "";

        int a = str1.size();
        int b = str2.size();

        while (b > 0) {
            int temp = a;
            a = b;
            b = temp % b;
        }

        for (int i = 0; i < a; i++) {
            if (str1[i] != str2[i]) {
                return "";
            }
            result += str1[i];
        }

        return result;
    }
};