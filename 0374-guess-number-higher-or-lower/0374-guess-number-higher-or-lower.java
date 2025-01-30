/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

public class Solution extends GuessGame {
    public int guessNumber(int n) {
        Random rand = new Random();
        int left = 1, right = n;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (guess(mid) > 0) {
                left = mid + 1;
            } else if (guess(mid) < 0) {
                right = mid - 1;
            } else {
                return mid;
            }
        }

        return 0;
    }
}