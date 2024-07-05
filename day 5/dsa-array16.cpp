// 3sum

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> sum;
    set<vector<int>> seen; // Set to track seen triplets

    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (i != j)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    if (i != k || j != k)
                    {
                        if (nums[i] + nums[j] + nums[k] == 0)
                        {
                            // sum.push_back({nums[i],nums[j],nums[k]});
                            if (seen.find({nums[i], nums[j], nums[k]}) == seen.end())
                            {
                                sum.push_back({nums[i], nums[j], nums[k]});
                                seen.insert({nums[i], nums[j], nums[k]});
                            }
                        }
                    }
                }
            }
        }
    }
    return sum;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> sum = threeSum(nums);
    for (auto &i : sum)
    {
        for (auto &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}