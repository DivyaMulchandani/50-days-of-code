//findKthLargest
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findKthLargest(vector<int> &nums, int k)
{
    int maxnum = nums[0];
    for (int j = 0; j < k; ++j)
    {
        maxnum = nums[0];
        // Find the maximum element
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] > maxnum)
            {
                maxnum = nums[i];
            }
        }
        // Erase the maximum element
        auto it = find(nums.begin(), nums.end(), maxnum);
        if (it != nums.end())
        {
            nums.erase(it);
        }
    }
    return maxnum;
}

int main()
{
    vector<int> nums = {3,2,1,5,6,4};
    int k=2;
    cout<<findKthLargest(nums,k);
    return 0;
}