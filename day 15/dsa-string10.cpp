// group anagrams
// keep count of each string eg: eat == 1e1a1t
// maintain the hashmap in which 1e1a1t will be the key and value will be the string that has that count

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> mp;
    for (string s : strs)
    {
        string temp = s;
        sort(temp.begin(), temp.end());
        mp[temp].push_back(s);
    }
    vector<vector<string>> ans;
    for (auto it : mp)
    {
        ans.push_back(it.second);
    }
    return ans;
}

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> ans = groupAnagrams(strs);
    for (auto it : ans)
    {
        cout << "[ ";
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}