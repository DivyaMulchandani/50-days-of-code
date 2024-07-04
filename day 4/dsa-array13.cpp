//Given an integer array nums, find the subarray with the largest product, and return its product.
#include <iostream>

using namespace std;

int subArray(int A[],int n){
    int current_procut=A[0];
    int max_product=A[0];
    for(int i=1;i<n;i++){
        current_procut=max(A[i],current_procut*A[i]);
        max_product=max(max_product,current_procut);
    }

    return max_product;
}


int main(){
    int A[]={-2,1,-3,4,-1,2,1,-5,4};
    int A1[]={2,3,-2,4};
    int n = sizeof(A1)/sizeof(A1[0]);

    cout<<"Product of max subarray is :"<<subArray(A1,n)<<endl;
}