// Transform One String to Another using Minimum Number of Given Operation

/*
Input:  A = "ABD", B = "BAD"
Output: 1
Explanation: Pick B and insert it at front.
Input:  A = "EACBD", B = "EABCD"
Output: 3
Explanation: Pick B and insert at front, EACBD => BEACD
             Pick A and insert at front, BEACD => ABECD
             Pick E and insert at front, ABECD => EABCD
*/

#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <unordered_map>
#include <algorithm>

using namespace std;

int transform(string a, string b)
{
    if (a.size() != b.size())
    {
        return -1;
    }

    unordered_map<char, int> amap;
    // create a map to store the frequency of characters in string A
    for (int i = 0; i < a.size(); i++)
    {
        amap[a[i]]++;
    }
    // subtract the frequency of characters in string B from the map

    for (int i = 0; i < b.size(); i++)
    {
        amap[b[i]]--;
    }
    // check if all the frequencies in the map are 0, indicating equal frequency of characters in both strings
    for (auto it : amap)
    {
        if (it.second != 0)
        {
            return -1;
        }
    }

    // calculate the minimum number of operations required to transform string A into string B
    // int count = 0;
    // for (int i = a.size() - 1; i >= 0; i--)
    // {

    //     cout << a[i] << b[i] << endl;
    //     if (a[i] != b[i])
    //     {
    //         cout<<count<<endl;
    //         count++;
    //     }
    // }
    // calculate the minimum number of operations required to transform string A into string B
    int i = a.size() - 1, j = a.size() - 1;
    int res = 0;
    while (i >= 0 && j >= 0)
    {
        while (i >= 0 && a[i] != b[j])
        {
            res++; // increment the number of operations required
            i--;   // move the pointer i to the left
        }
        i--;
        j--;
    }

    return res;
}

// Driver code
int main()
{
    string A = "EACBD";
    string B = "EABCD";

    cout << "Minimum number of operations required is " << transform(A, B) << endl;
    return 0;
}