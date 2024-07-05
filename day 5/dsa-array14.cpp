//find minimum in the rotated sorted array
#include<iostream>
#include<vector>

using namespace std;

int findMin(vector<int>& nums) {
        int mini = nums[0];
        for (int i=0;i<nums.size();i++){
            mini = min(mini,nums[i]);
        }
        return mini;
    }

int main(){
    vector<int> nums={2,5,3,8,6};
    cout<<"Min of the array:";
    cout<<findMin(nums)<<endl;
    return 0;
}