//Given an integer array nums, find the subarray with the largest sum, and return its sum.
#include <iostream>

using namespace std;

int subArray(int A[],int n){
    int current_sum=A[0];
    int max_sum=A[0];
    for(int i=1;i<n;i++){
        current_sum=max(A[i],current_sum+A[i]);
        max_sum=max(max_sum,current_sum);
    }
    //for (int i = 1; i < numsSize; i++) {
    //     if (nums[i] > current_sum + nums[i]) {
    //         current_sum = nums[i];
    //     } else {
    //         current_sum += nums[i];
    //     }

    //     if (current_sum > max_sum) {
    //         max_sum = current_sum;
    //     }
    // }

    return max_sum;
}


int main(){
    int A[]={-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(A)/sizeof(A[0]);

    cout<<"Sum of max subarray is :"<<subArray(A,n)<<endl;
}