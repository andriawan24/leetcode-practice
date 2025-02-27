class Solution {
    public String interpret(String command) {
        StringBuilder result = new StringBuilder(command.length());

        for (int i = 0; i < command.length(); i++) {
            if (command.charAt(i) == 'G') {
                result.append(command.charAt(i));
                continue;
            }

            if (command.charAt(i + 1) == ')') {
                result.append('o');
                i++;
            } else if (command.charAt(i + 1) == 'a') {
                result.append("al");
                i+=3;
            }
        }

        return result.toString();
    }
}