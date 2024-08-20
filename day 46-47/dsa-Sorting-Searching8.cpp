// Count triplets with sum smaller than a given value
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums, int x)
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

                if (Csum < x)
                {
                    if (seen.find({nums[i], nums[left], nums[right]}) == seen.end())
                    {
                        sum.push_back({nums[i], nums[left], nums[right]});
                        seen.insert({nums[i], nums[left], nums[right]});
                    }

                    ++left;
                    --right;
                }
                else if (Csum > x)
                {
                    --right;
                }
                else
                {
                    ++left;
                }
            }
        }

        return sum;
    }
};

int main()
{
    Solution solution;

    // Input array
    vector<int> nums = {12, 3, 6, 1, 6, 9};
    vector<int> nums1 = {-2, 0, 1, 3};
    int x1 = 2;

    // Given sum
    int x = 24;

    // Get the result
    vector<vector<int>> result1 = solution.threeSum(nums, x);
    vector<vector<int>> result = solution.threeSum(nums1, x1);

    // Print the triplets
    if (result.empty())
    {
        cout << "No triplets found with sum less than " << x << "." << endl;
    }
    else
    {
        cout << "Triplets with sum less than " << x << " are:" << endl;
        for (const auto &triplet : result)
        {
            cout << "(" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << ")" << endl;
        }
    }

    return 0;
}