// longest common prefix

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int length(vector<string> &strs)
{
    int min_length = strs[0].length();
    for (const auto &str : strs)
    {
        if (str.length() < min_length)
        {
            min_length = str.length();
        }
    }
    return min_length;
}

string LCP(vector<string> &strs)
{
    string s;
    int min_length = strs[0].length();
    for (const auto &str : strs)
    {
        if (str.length() < min_length)
        {
            min_length = str.length();
        }
    }
    for (int j = 0; j < min_length; j++)
    {
        char c = strs[0][j];
        for (int i = 1; i < strs.size(); i++)
        {
            //cout << strs[i][j] << endl;
            if(strs[i][j]!=c){
                return s;
            }
        }
        s+=c;
    }
    return s;
}

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};

    cout<<LCP(strs);
    return 0;
}