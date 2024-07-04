//still left in half 
//Repeat and Missing Number Array

#include <iostream>
#include <vector>

using namespace std;

void repeatedMissingArray(vector<int>& A,int n){
    int maxnum = A[0];
    int minnum = A[0];
    int missing,repeated;
    for(int i=0;i<n;i++){
        maxnum = max(maxnum,A[i]);
        minnum = min(minnum,A[i]);
        //cout<<maxnum<<minnum<<endl;
        for(int j=i+1;j<n;j++){
            if(A[i]==A[j]){
                cout<<A[i]<<" is repeated"<<endl;
                break;
            }
        }
    }
        cout<<maxnum<<minnum<<endl;

    for (int i = 0; i < n; ++i) {
        if (A[i] != i + minnum) {
            repeated = A[i];
            missing = i + minnum;
            break;
        }
    }
    cout <<missing<<repeated<<endl;

}

int main(){
    
    vector<int> A = {3,2,6,4,3,1};
    int n = A.size();

    repeatedMissingArray(A,n);    
    return 0;
}