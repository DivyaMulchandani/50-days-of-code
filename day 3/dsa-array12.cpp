#include<iostream>
#include<vector>

using namespace std;

void POAES(vector<int> &nums){
    int n = nums.size();
    vector<int> productarr={};
    int product;
    for(int i=0;i<n;i++){
        product=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                product *= nums[j];
            }
        }
        productarr.push_back(product);
    }
    cout<<"[";
    for(int i=0;i<n;i++){
        cout<<productarr[i]<<",";
    }
    cout<<"]"<<endl;
}

int main(){
    //vector<int> nums = {3,6,1,8};
    vector<int> nums = {1,2,3,4};

    cout<<"Result: "<<endl;
    POAES(nums);
    return 0;
}