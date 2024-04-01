
using System;

public class Solution
{
    public bool MakePalindrome(string input)
    {
        int left = 0;
        int right = input.Length - 1;
        int differences = 0;

        while (left < right && differences <= 2)
        {
            differences += (input[left++] != input[right--]) ? 1 : 0;
        }
        return differences <= 2;
    }
}
