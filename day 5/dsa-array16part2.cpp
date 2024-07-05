// 3sum

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> sum;
    set<vector<int>> seen;

    if (nums.size() < 3)
    {
        return sum;
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue; // skip

        int left = i + 1;
        int right = nums.size() - 1;

        while (left < right)
        {
            int Csum = nums[i] + nums[left] + nums[right];

            if (Csum == 0)
            {
                if(seen.find({nums[i], nums[left], nums[right]})==seen.end()){
                    sum.push_back({nums[i], nums[left], nums[right]});
                    seen.insert({nums[i], nums[left], nums[right]});
                }
                
                ++left;
                --right;
            }
            else if (Csum < 0)
            {
                ++left;
            }
            else
            {
                --right;
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