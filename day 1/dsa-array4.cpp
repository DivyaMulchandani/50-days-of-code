//contains duplicate

#include <iostream>

using namespace std;

bool ContainsDuplicate(int A[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]==A[j]){
                return true;
            }
        }
    }
    return false;
}


int main(){
    int A[]={3,4,15,6,7,8,2,4,5,1};
    int n = sizeof(A)/sizeof(A[0]);

    cout<<ContainsDuplicate(A,n)<<endl;
    

}