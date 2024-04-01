
public class Solution {

    public boolean makePalindrome(String input) {
        int left = 0;
        int right = input.length() - 1;
        int differences = 0;

        while (left < right && differences <= 2) {
            differences += (input.charAt(left++) != input.charAt(right--)) ? 1 : 0;
        }
        return differences <= 2;
    }
}
