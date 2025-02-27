class Solution {
public:
    string interpret(string command) {
        string result = "";
        
        int i = 0;
        while (i < command.size()) {
            if (command[i] == 'G') {
                result += "G";
                i++;
            } else if (command[i] == '(') {
                if (command[i + 1] == ')') {
                    result += "o";
                    i+=2;
                } else if (command[i + 1] == 'a') {
                    result += "al";
                    i+=4;
                }
            }
        }

        return result;
    }
};