// palindromic substrings
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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
    for (int i = 0; i < ss.size() / 2; i++)
    {
        if (ss[i] != ss[(ss.size() - i) - 1])
        {
            return false;
        }
    }
    return true;
}

int palindromicSubstring(string s)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            if (isPalindrome(s.substr(i, j - i + 1))) // aaab
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    string s;
    cout << "Enter any string: ";
    cin >> s;
    cout << palindromicSubstring(s);
    return 0;
}