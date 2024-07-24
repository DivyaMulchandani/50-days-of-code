// Smallest window in a string containing all the characters of another string
// sliding window

#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    string s = "timetopractice";
    string p = "toc";
    int minLen = INT_MAX;
    unordered_map<char, int> pmap;
    unordered_map<char, int> smap;
    for (char c : p)
    {
        pmap[c]++;
    }

    int totalLen = pmap.size();
    int currentLen = 0;
    int left = 0, right = 0;

    while (right < s.size())
    {
        char c = s[right];
        smap[c]++;
        if (pmap.find(c) != pmap.end() && pmap[c] == smap[c])
        {
            currentLen++;
        }
        while (currentLen == totalLen)
        {
            if (right - left + 1 < minLen)
            {
                minLen = right - left + 1;
            }
            char d = s[left];
            smap[d]--;
            if (pmap.find(d) != pmap.end() && pmap[d] > smap[d])
            {
                currentLen--;
            }
            left++;
        }
        right++;
    }

    cout << minLen << endl;

    return 0;
}