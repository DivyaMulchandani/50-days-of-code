// Arrange given numbers to form the biggest number

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void reverse(vector<int> &nums, int start, int end)
{
    while (start < end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

vector<int> arrange(vector<int> &nums)
{
    int sum = 3 << 6;
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size();j++){
            string x = "nums[i]" << nums[i];

            int y = nums[j] << nums[j];
            cout<<x<<y<<endl;
            if(y < x){
                swap(nums[i], nums[j]);
                
            }
        }
    }
    cout<<sum<<endl;
    return nums;
}

int main()
{
    vector<int> nums = {3, 30, 34, 5, 9};
   vector<int> result = arrange(nums);
   for(int i=0;i<nums.size();i++){
    cout<<result[i]<<" ";
   }
    return 0;
}