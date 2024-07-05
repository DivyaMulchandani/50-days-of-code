#include<iostream>
#include<vector>

using namespace std;

bool pairSum(vector<int> &nums,int k){
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==k){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<int> nums={11, 15, 26, 38, 9, 10};
    cout<<"Is there a pair with a given sum in the rotated sorted array: ";
    cout<<pairSum(nums,35)<<endl;
    cout<<pairSum(nums,45);

    return 0;
}