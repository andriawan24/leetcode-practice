class Solution {
    public int minMovesToSeat(int[] seats, int[] students) {
        int moveNums = 0;

        Arrays.sort(seats);
        Arrays.sort(students);
        
        for (int i = 0; i < seats.length; i++) {
            moveNums += Math.abs(seats[i] - students[i]);
        }

        return moveNums;
    }
}