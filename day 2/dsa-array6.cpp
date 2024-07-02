//search in rotated sorted array
#include <iostream>

using namespace std;

int search(int nums[], int numsSize, int target) {
    for(int i=0;i<numsSize;i++){
        if(target==nums[i]){
            return i;
        }
    }
    return -1;
}

int main(){

    int nums[]={4,7,9,2,8,5,1,6};
    int numsSize=sizeof(nums)/sizeof(nums[0]);
    int target=9;

    cout<<search(nums,numsSize,target)<<endl;
    return 0;
}