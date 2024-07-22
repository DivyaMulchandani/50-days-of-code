// longest palindromic substring
#include <iostream>
#include <string>

class Solution
{
public:
    std::string longestPalindrome(std::string s)
    {
        int n = s.size();
        if (n == 0)
            return "";

        int maxLength = 1;
        int start = 0;

        for (int i = 0; i < n; i++)
        {
            // Odd length palindromes
            int left = i, right = i;
            while (left >= 0 && right < n && s[left] == s[right])
            {
                if (right - left + 1 > maxLength)
                {
                    start = left;
                    maxLength = right - left + 1;
                }
                left--;
                right++;
            }

            // Even length palindromes
            left = i, right = i + 1;
            while (left >= 0 && right < n && s[left] == s[right])
            {
                if (right - left + 1 > maxLength)
                {
                    start = left;
                    maxLength = right - left + 1;
                }
                left--;
                right++;
            }
        }

        return s.substr(start, maxLength);
    }
};

int main()
{
    Solution solution;
    std::string s = "babad";
    std::cout << "Longest Palindromic Substring: " << solution.longestPalindrome(s) << std::endl;
    return 0;
}
