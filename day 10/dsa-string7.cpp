// search in rotated sorted array

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int result = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            result = i;
        }
    }
    
    return result;
}