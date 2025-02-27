class Solution {
    public String interpret(String command) {
        String result = "";

        for (int i = 0; i < command.length(); i++) {
            if (command.charAt(i) == 'G') {
                result += command.charAt(i);
                continue;
            }

            switch(command.charAt(i + 1)) {
                case ')':
                    result += 'o';
                    i++;
                    break;
                case 'a':
                    result += "al";
                    i+=3;
                    break;
            }
        }

        return result;
    }
}