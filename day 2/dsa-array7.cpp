//find the next permutation **************
#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int>& nums,int start,int end){
    while(start<end){
        int temp=nums[start];
        nums[start]=nums[end];
        nums[end]=temp;
        start++;
        end--;
    }
}

void nextPermutation(vector<int>& nums){
    int n=nums.size();
    int i=n-2;

    while (i>=0 && nums[i] >= nums[i+1])
    {
        i--;
    }
    
    if(i>=0){
        int j=n-1;
        while(nums[j]<=nums[i])
        {
            j--;
        }
        swap(nums[i],nums[j]);
    }
    reverse(nums,i+1,n-1);
}

int main(){
    vector<int> nums={3,2,1};
    nextPermutation(nums);
    cout<<"The next permutation is: ";
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" "<<endl;
    }

    return 0;
}
