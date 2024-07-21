// longest palindromic substring

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s)
{
    string ss;
    for (char c : s)
    {
        if (isalnum(c))
        {
            ss += tolower(c);
        }
    }
    for (int i = 0; i < ss.size(); i++)
    {
        if (ss[i] != ss[(ss.size() - i) - 1])
        {
            return false;
        }
    }
    return true;
}

string longestPalindrome(string s)
{
    int left = 0;
    int right = 0;
    string temp;
    for (int i = 0; i < s.size(); i++)
    {
        temp = s.substr(left, right);
        if (isPalindrome(temp))
        {
        }
    }
}