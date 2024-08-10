// Find common elements in three sorted arrays

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void findCommon(vector<int> &first, vector<int> &second, vector<int> &third)
{
    map<int, int> m;
    for (int i = 0; i < first.size(); i++)
    {
        m[first[i]]++;
    }
    for (int i = 0; i < second.size(); i++)
    {
        if (m[second[i]] == 1)
        {
            m[second[i]]++;
        }
    }
    for (int i = 0; i < third.size(); i++)
    {
        if (m[third[i]] == 2)
        {
            m[third[i]]++;
        }
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second == 3)
        {
            cout << it->first << " ";
        }
    }
}
int main()
{
    vector<int> first = {1, 2, 3, 4, 5};
    vector<int> second = {2, 4, 6, 8, 10};
    vector<int> third = {2, 3, 6, 4, 10};
    findCommon(first, second, third);
    return 0;
}