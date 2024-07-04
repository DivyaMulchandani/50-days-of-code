//kthSmallestElement
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int KthSmallestElement(vector<int> &nums,int k){
    int minnum;
    for(int j=0;j<k;j++){
        minnum=nums[0];
        for(int i=1;i<nums.size();i++){
            minnum=min(minnum,nums[i]);
        }
        auto it = find(nums.begin(),nums.end(),minnum);
        nums.erase(it);
        
    }
    return minnum;
}

int main(){
    vector<int> nums = {3,6,9,2,4,1,8};
    int k = 3;
    cout<<"Kth Smallest Element is: "<<KthSmallestElement(nums,k)<<endl;
    return 0;
}